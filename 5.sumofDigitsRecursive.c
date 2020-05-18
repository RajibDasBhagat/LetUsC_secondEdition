
#include<stdio.h>
#include<conio.h>
int sumDigits(int num){
    int sum=0,reminder;

    if(num > 0){
        reminder = num%10;
        sum = reminder+sumDigits(num/10);
    }
    return sum;
}

void main(){
    int num,temp,ans;
    printf("Enter a integer number: ");
    scanf("%d",&num);
    temp=num;
    ans=sumDigits(num);
    printf("Sum of digits %d is %d. ",temp,ans);

    getch();
}


