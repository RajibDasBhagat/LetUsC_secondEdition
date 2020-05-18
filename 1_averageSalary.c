#include<stdio.h>
#include<conio.h>

void main(){
    float basicSalary,dearnessAllowance,houseRent;
    float grossSalary;
    printf("Enter the basic pay: ");
    scanf("%f",&basicSalary);

    dearnessAllowance=40*basicSalary/100;
    houseRent=20*basicSalary/100;
    grossSalary= basicSalary+dearnessAllowance+houseRent;

    printf("*****Pay Details***** \n");
    printf("----------------------\n");
    printf("Basic Pay: %.2f \n",basicSalary);
    printf("DA: %.2f \n",dearnessAllowance);
    printf("HA: %.2f \n",houseRent);
    printf("______________________\n");
    printf("Gross Pay: %.2f \n",grossSalary);

    getch();
}
