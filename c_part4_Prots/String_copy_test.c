#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXlenth 20
//#define my_malloc malloc

void *ptr;  //place for my temporary string copy
int appl1=0; // how many times function applied to my_malloc
 char s13[]="test was good";
 
 void *my_malloc(size_t size) 
{
    appl1++;
    ptr = s13;
     return ptr ;
}


char *stringTOdynamo (char *s1)
{
  int i = 0;
  for (i = 0; s1[i] != 0; i++)
    if (i > MAXlenth)
      return NULL;
  if (i == 0)
    return NULL;
 char *b;
  b= (char *) my_malloc ((i+1) * sizeof (char));
  for (int n = 0; n < i; n++)
    b[n] = s1[n];
    b[i] = '\0';
    ptr=b;
  return ptr;
}

int main ()
{
     //copying a string of midle size
 
  char s2[] = "Hello World and C!\n";
  char *s3;
  s3 = stringTOdynamo (s2);
  printf ("%s\t", s3);
  
   //copying a short string 
    char s4[] = "quit";
    s3 = stringTOdynamo (s4);
    printf ("%s\n", s3);
  
    //copying a string with 0 size
    char *s5;
    s3 = stringTOdynamo (s5);
    if (s3!=NULL)
   printf ("%s\n", s3);
   else printf("error for 0 length of source\n");
   
    //test for long string
   char *s6;
   s6=(char*)malloc((MAXlenth+2)*sizeof(char));
    for (int j=0;j<21;j++)
        s6[j]='a';
   s6[0]='d'; 
   s6[1]=' ';
   s6[2]='a';
   s6[3]='b';
   s6[21]='q';
   printf("%s\n",s6);
    s3 = stringTOdynamo (s6);
    if (s3!=NULL)
      printf ("%s\n", s3);
     else printf("error for big length of source\n");
    
     //test for string with terminator inside
    for (int j=0;j<21;j++)
        s6[j]='a';
   s6[0]='d'; 
   s6[1]='\0';
   s6[2]='a';
   s6[3]='b';
   s6[21]='q';
   printf("%s\n",s6);
    s3 = stringTOdynamo (s6);
    if (s3!=NULL)
      printf ("%s\n", s3);
     else printf("error for big length of source\n"); 
     
  printf ("my_malloc was called %d times\n ", appl1);
}




