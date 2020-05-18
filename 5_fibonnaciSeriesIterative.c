

#include<stdio.h>
#include<conio.h>
void fibbonaci(int num){
    int i,f1=1,f2=1,f3=0;
    for(i=0;i<num;i++){
        printf("%d ",f1);
        f3=f1+f2;
        f1=f2;
        f2=f3;
    }
}

void main(){
    int num,i;
    printf("Enter a integer number: ");
    scanf("%d",&num);

    fibbonaci(num);
    getch();
}



