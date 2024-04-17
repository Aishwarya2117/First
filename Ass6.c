#include<stdio.h>
int main()
{
    float r,h ,surfaceArea,volume;
    printf("radius and height of cylinder is:");
    scanf("%f %f", &r,&h );
    surfaceArea = 2*3.14*r*r + 2*3.14*r*h;
    volume=3.14*r*r*h;
     printf("\nsurfaceArea of cylinder  is:%.0f",surfaceArea);
      printf(" \nvolume of cylinder is:%.0f",volume);

}