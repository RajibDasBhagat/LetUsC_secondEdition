#include<stdio.h>
#include<conio.h>

void main(){
    int num1,num2,temp;

    printf("Enter num1: ");
    scanf("%d",&num1);
    printf("Enter num2: ");
    scanf("%d",&num2);
    printf("----------------- \n");
    printf("Before swapping %d %d \n",num1, num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping %d %d \n",num1, num2);

    getch();
}
