#include <stdio.h>
#include <iostream>
#include <stdlib.h>

/*this function created array which is bigger then target on one unit 
and adds the number as the last member of new array*/
int* ar_push(int* ptr_ar, int number)
{
    int* temp_arrey;
    temp_arrey = (int*)malloc((number + 1) * sizeof(int));
    for (int j = 0; j < (number); j++)
        temp_arrey[j] = ptr_ar[j];
    temp_arrey[number] = number;
    free(ptr_ar);
    return temp_arrey;
}

/*this function searches for first appearing of guess in arrey*/
int ar_find_first(int* ptr_ar,int number, int guess)
{
    for (int j = 0; j < (number); j++)
    if (ptr_ar[j]==guess)
            return j;
    return -1;
}

/*this function removes member #cutNum from arrey. The rest of members have their values in new arrey */
int* ar_remove(int* ptr_ar, int number, int cutNum)
{
    int* temp_arrey;
    if ((cutNum < 0) || (cutNum > number))
        return NULL;
    temp_arrey = (int*)malloc((number - 1) * sizeof(int));
    for (int j = 0; j < cutNum; j++)
        temp_arrey[j] = ptr_ar[j];
    for (int j = cutNum; j <(number-1); j++)
        temp_arrey[j] = ptr_ar[j+1];
    free(ptr_ar);

    return temp_arrey;
}

int main()
{
    int* ptrZm;
    int* test;
    test = (int*)malloc(4 * sizeof(int));
    for (int j = 0; j < 4; j++)
    test[j] = j;
    ptrZm = ar_push(test, 4);
    std::cout << "ptrZm[4]\t" << ptrZm[4] << "\n";
    ptrZm = ar_push(ptrZm, 5);
    std::cout << "ptrZm[5]\t" << ptrZm[5] << "\n";
    std::cout << "ar_find_first(ptrZm, 5, 4)=\t" << ar_find_first(ptrZm, 5, 4) << "\n";
    std::cout << "ar_find_first(ptrZm, 5, 6)=\t" << ar_find_first(ptrZm, 5, 6) << "\n";
    std::cout << "ar_find_first(ptrZm, 5, 0)=\t" << ar_find_first(ptrZm, 5, 0) << "\n";
    ptrZm = ar_remove(ptrZm, 5, 2);
    std::cout << "ptrZm[2]=\t" << ptrZm[2] << "\n";
    return 0;
}
