
#include<stdio.h>
#include<conio.h>

void main(){
    char input;

    printf("Input something: ");
    scanf("%c",&input);

    if(input>=48 && input <=57){
        printf("Digit");
    }
    else if(input>=65 && input <=90){
        printf("Upper Case");
    }
    else if(input>=97 && input <=122){
        printf("Lower Case");
    }
    else{
        printf("Special Character");
    }

    getch();
}
