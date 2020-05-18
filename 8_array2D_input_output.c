#include<stdio.h>
#include<conio.h>

void input(int rows, int cols,int arr[][cols]){
    int i,j;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&arr[i][j]);
        }
    }
}

void output(int rows, int cols,int arr[][cols]){
    int i,j;
    printf("\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
