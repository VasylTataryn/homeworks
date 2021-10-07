#include <stdio.h>
struct RGB888 {
    unsigned char R;
    unsigned char G;
    unsigned char B;
} ;

struct RGB565 {
    unsigned char RG;
    unsigned char GB;
   } ;
   
   struct RGB565 convert(struct RGB888 pixel1)
   {
     struct RGB565 erzacPix1;  
     erzacPix1.RG=((pixel1.R>>3)<<3) | (pixel1.G>>5);
     erzacPix1.GB=((pixel1.G>>2)<<5) | (pixel1.B>>3);
     return erzacPix1;
   }

int main()
{
    struct RGB888 pixel = {0xf1, 0xe3, 0xd5};
    struct RGB565 erzacPix;
    
    erzacPix=convert(pixel);
    
    printf("erzacPix.RG= 0x%x\t erzacPix.GB= 0x%x\n", erzacPix.RG, erzacPix.GB);
    

    return 0;
}

