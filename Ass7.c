#include<stdio.h>
int main()
{
    float F,celsius,kelvin;
    printf("Temp in Fahrenheit is :");
    scanf("%f",&F);
    celsius = 5.0/9*(F-32);
    kelvin =celsius +273.15;
    printf("\nTemp in celsius is :%f",celsius);
     printf("\nTemp in kelvin is :%f",kelvin);
return 0;

}