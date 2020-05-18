
#include<stdio.h>
#include<conio.h>
int sumDigits(int num){
    int quotient,reminder,sum=0;
    while(num > 0){
        quotient = num/10;
        reminder = num%10;

        sum += reminder;
        num = quotient;
    }
    return sum;
}

void main(){
    int num,temp,sum;
    printf("Enter a integer number: ");
    scanf("%d",&num);
    temp=num;
    sum=sumDigits(num);
    printf("Sum of digits %d is %d. ",temp,sum);

    getch();
}

