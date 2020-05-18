#include "array2D_input_output.c"

int findmax(int rows, int cols,int arr[][cols]){
     int i,j,max;

     max=arr[0][0];
     for(i=0;i<rows;i++){
        for(j=0;j<rows;j++){
            if(arr[i][j] > max){
                max=arr[i][j];
            }
        }
     }
     return max;
}
void main(){
    int rows,cols, max;

    printf("Rows: ");
    scanf("%d",&rows);
    printf("Cols: ");
    scanf("%d",&cols);
    int arr[rows][cols];

    input(rows,cols,arr);
    max=findmax(rows,cols,arr);
    output(rows,cols,arr);
    printf("Largest Element : %d ",max);
    getch();
}
