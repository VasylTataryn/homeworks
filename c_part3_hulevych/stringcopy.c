#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXlenth 10000
char* stringTOdynamo(char* s1)
{
    int i = 0;
    for (i = 0; s1[i] != 0; i++)
        if (i > MAXlenth)
            return NULL;
    if (i==0)
        return NULL;
    char* b;
     b = (char*)malloc(i * sizeof(char));
     for (int n = 0; n < i; n++)
         b[n] = s1[n];
     return b;

}

int main()
{
    printf("Hello World! from C! \n");
    char s2[] = "Hello World and C!\n";
    char* s3;
    s3 = stringTOdynamo(s2);

    printf("%s\t", s3);

}

