#include<stdio.h>
#include<conio.h>

void main(){
    int year;

    printf("Enter a year: ");
    scanf("%d",&year);

    if(year%100 == 0 && year%400 ==0 || year%4==0){
           printf("Leap Year");
    }
    else{
        printf("Not Leap year");
    }

    getch();
}
