

#include<stdio.h>
#include<conio.h>
#include<math.h>

int factors(int num){
    int i;

    while(num%2==0){
        printf("2 ");
        num /= 2;
    }

    for(i=3;i<=sqrt(num);i=i+2){
        while(num % i == 0){
            printf("%d ",i);
            num /= i;
        }
    }
    if(num>2){
        printf("%d ",num);
    }


    return 0;
}

void main(){
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    factors(num);

    getch();
}

