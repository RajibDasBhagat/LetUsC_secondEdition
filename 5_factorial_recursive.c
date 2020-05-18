

#include<stdio.h>
#include<conio.h>
int factorial(int num){
    if(num<=1){
        return num;
    }
    else{
        return num*factorial(num-1);
    }
}

void main(){
    int num,ans;

    printf("Enter a number: ");
    scanf("%d",&num);

    ans=factorial(num);
    printf("Factorial of %d is %d. \n",num,ans);

    getch();
}
