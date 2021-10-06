#include <iostream>
#include <stdlib.h>

/*adds new member to queue*/
int* enqueue(int* ptr_ar, int number)
{
    int* temp_arrey;
    temp_arrey = (int*)malloc((number + 1) * sizeof(int));
    for (int j = 0; j < (number); j++)
        temp_arrey[j+1] = ptr_ar[j];
    temp_arrey[0] = number;
    free(ptr_ar);
    return temp_arrey;
}

/*removes a member from queue*/
int* dequeue(int* ptr_ar, int number)
{
    int* temp_arrey;
    if (number==0)
        return NULL;
    temp_arrey = (int*)malloc((number - 1) * sizeof(int));
    for (int j = 0; j < (number - 1); j++)
        temp_arrey[j] = ptr_ar[j];
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

    ptrZm = enqueue(test, 4);

    std::cout << "ptrZm[0]\t" << ptrZm[0] << "\n";

    ptrZm = enqueue(ptrZm, 5);

    std::cout << "ptrZm[0]\t" << ptrZm[0] << "\n";

    std::cout << "ptrZm[3]=\t" << ptrZm[3] << "\n";
  

    ptrZm = dequeue(ptrZm, 5);

    std::cout << "ptrZm[3]=\t" << ptrZm[3] << "\n";

}

