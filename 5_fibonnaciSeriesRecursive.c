
#include<stdio.h>
#include<conio.h>
int fibbonaci(int num){
    if(num<=1){
        return num;
    }
    return fibbonaci(num-1)+fibbonaci(num-2);
}

void main(){
    int num,i;
    printf("Enter a integer number: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        printf("%d ",fibbonaci(i));
    }

    getch();
}



