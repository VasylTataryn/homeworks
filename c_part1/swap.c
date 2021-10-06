#include <stdio.h>
#define uint32_t unsigned int

uint32_t swap32(uint32_t x)
{
    return (x<<16) | (x>>16);
}
    

int main()
{
    printf("not swapped 0x%08x\n", 0x1122aabb);
    printf("swapped 0x%08x\n", swap32(0x1122aabb));
    return 0;
}


