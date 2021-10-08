#include <stdio.h>

int biggest(int *ptr, int number)
{
    int maxik=ptr[0];
    for(int i=0; i<number; i++)
    {
        if (ptr[i]>maxik)
        maxik=ptr[i];
    }
   return maxik ;
}

int main()
{
    int massyv[9]={0,1,2333,3,17,89,54,99,23};
    printf("maximum= %d\n", biggest(massyv, 9));
    return 0;
}

