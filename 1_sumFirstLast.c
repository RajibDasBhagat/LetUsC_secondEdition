#include<stdio.h>
#include<conio.h>

void main(){
    int num,reminder,reversed=0;

    int first,last;
    printf("Enter a number: ");
    scanf("%d",&num);

    first=num%10;
    while(num>0){
        reminder = num%10;
        reversed = reversed*10 + reminder;
        num = num/10;
    }
    last=reversed%10;
    printf("Sum of first and last digit: %d\n",first+last);

    getch();
}
