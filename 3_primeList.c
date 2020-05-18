#include<stdio.h>
#include<conio.h>

void main(){
    int num,i,j;
    printf("Enter a integer number: ");
    scanf("%d",&num);
    for(i=1;i<=num;){
        for(j=2;j<i;){
            if(i%j==0){
                break;
            }
            else{
                j++;
            }
        }
        if(i==j){
            printf("%d ",i);
        }
        i++;
    }


    getch();
}

