#include <stdio.h>
#define bigInch 254
int main()
{
    float height=0;
    float width=0;
    
    printf("give me the height of rectangle in meters\t");
    scanf("%f",&height);
    printf("give me the width of rectangle in meters\t");
    scanf("%f", &width);
    printf("\n");
    printf("perimeter of rectangle in inches=%f \t", (height+width)*bigInch*2);
    printf("area of rectangle in inches=%f \n", height*width*bigInch*bigInch);
    return 0;
}

