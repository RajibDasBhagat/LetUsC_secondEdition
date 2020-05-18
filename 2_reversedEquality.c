#include<stdio.h>
#include<conio.h>

void main(){
    int num,reminder,reversed=0;
    int original;

    printf("Enter a number: ");
    scanf("%d",&num);

    original=num;
    while(num>0){
        reminder = num%10;
        reversed = reversed*10 + reminder;
        num = num/10;
    }

    if(original==reversed){
        printf("Equal");
    }
    else{
        printf("Not Equal");
    }

    getch();
}

