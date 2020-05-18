

#include<stdio.h>
#include<conio.h>
int factorial(int num,int fact){
    int i;
    for(i=1;i<=num;i++){
        fact *= i;
    }
    return fact;
}

void main(){
    int num,fact=1,ans;

    printf("Enter a number: ");
    scanf("%d",&num);

    ans=factorial(num,fact);
    printf("Factorial of %d is %d. \n",num,ans);

    getch();
}
