#include<stdio.h>
int main()
{
    float salary,pf,HRA,tax,DA,NetSalary;
    printf("Enter salary of employee:");
    scanf("%f", &salary);
    pf =2.0/100*salary;
    printf("\npf =%.f",pf);
    HRA =5.0/100*salary;
    tax =3.0/100*salary;
    DA =8.0/100*salary;
    NetSalary=salary-pf-HRA-tax-DA;
    printf("\nNetSalary =%.f",NetSalary);
}