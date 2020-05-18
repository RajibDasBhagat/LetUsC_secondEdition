#include<stdio.h>
#include<conio.h>

void main(){
    int num,reminder,reversed=0;

    printf("Enter a number: ");
    scanf("%d",&num);

    while(num>0){
        reminder = num%10;
        reversed = reversed*10 + reminder;
        num = num/10;
    }

    printf("Reversed: %d\n",reversed);

    getch();
}
