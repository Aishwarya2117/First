#include<stdio.h>
int main()
{
    float math,sci,history,marathi,english ;
    float Total, percentage;;
    printf("Enter marks of 5 subject :");
    scanf("%f %f %f %f %f",&math,&sci,&history,&marathi,&english);
    
    Total= math+ sci+ history + marathi + english;
    
    percentage= Total/500.0*100;
    printf("Total =%f",Total);
    printf("\npercentage =%f",percentage);

}