#include<stdio.h>
#include<conio.h>

void main(){
    int choice;
    float fahrenheit,celsius;

    printf("Enter your choice: \n");
    printf("1. Fahrenheit to Celsius. \n");
    printf("2. Celsius to Fahrenheit. \n");
    scanf("%d",&choice);

    switch(choice){
    case 1:
        printf("Enter temperature (in Fahrenheit): ");
        scanf("%f",&fahrenheit);

        celsius = 5 * (fahrenheit-32)/9 ;
        printf("%f Fahrenheit to %f Celsius.",fahrenheit,celsius);
        break;

    case 2:
        printf("Enter temperature (in Celsius): ");
        scanf("%f",&celsius);

        fahrenheit = (9/5 * celsius) + 32 ;
        printf("%f Celsius to %f Fahrenheit.",celsius,fahrenheit);
        break;
    default:
        printf("Invalid Input");
        break;
    }

    getch();
}

