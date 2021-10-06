#include <stdio.h>

int main()
{
    int nominator=1;
    do {
        printf("give me nominator in diapason from 1 to 500, please\t");
        scanf("%d", &nominator);
    } while((nominator>499) || (nominator==0));
    
    
    for(int i=1; i*nominator<=500; i++)
    printf(" %d \t integer divisible to nominator equal to %d \n", i, i*nominator);
    return 0;
}
