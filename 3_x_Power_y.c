
#include<stdio.h>
#include<conio.h>

void main(){
    int num1, num2;
    int power=1,i=1;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);

    while(i<=num2){
        power=power*num1;
        i += 1;
    }
    printf("Power of %d and %d is %d. \n",num1,num2,power);

    getch();
}

