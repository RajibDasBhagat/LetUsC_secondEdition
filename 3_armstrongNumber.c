#include<stdio.h>
#include<conio.h>

void main(){
    int num,quotient,reminder,sum=0,temp;
    printf("Enter a integer number: ");
    scanf("%d",&num);
    temp=num;

    while(num > 0){
        quotient = num/10;
        reminder = num%10;

        sum += reminder*reminder*reminder;
        num = quotient;
    }
    if(sum==temp){
        printf("Armstrong");
    }
    else{
        printf("Not Armstrong");
    }

    getch();
}
