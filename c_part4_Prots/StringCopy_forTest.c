#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXlenth 20
#define my_malloc malloc

void *ptr;  //place for my temporary string copy
char *stringTOdynamo (char *s1)
{
  int i = 0;
  for (i = 0; s1[i] != 0; i++)
    if (i > MAXlenth)
      return NULL;
  if (i == 0)
    return NULL;
  char *b;
  b = (char *) my_malloc (i * sizeof (char));
  for (int n = 0; n < i; n++)
    b[n] = s1[n];
    ptr=b;
  return ptr;
}

int
main ()
{
  char s2[] = "Hello World and C!\n";
  char *s3;
  s3 = stringTOdynamo (s2);

  printf ("%s\t", s3);
  printf ("my function operates well from the first glance\n");
}



