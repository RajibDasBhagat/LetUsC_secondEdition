#include "array2D_input_output.c"

void sub(int rows, int cols,int arr1[][cols],int arr2[][cols]){
    int i,j;
    int temp[rows][cols];

    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            temp[i][j]= arr1[i][j]-arr2[i][j];
        }
    }
    printf("Subtraction of two matrices:");
    output(rows,cols,temp);
}

void main(){
    int rows,cols;

    printf("Rows: ");
    scanf("%d",&rows);
    printf("Cols: ");
    scanf("%d",&cols);
    int arr1[rows][cols];
    int arr2[rows][cols];

    printf("Array1:\n");
    input(rows,cols,arr1);
    printf("Array2:\n");
    input(rows,cols,arr2);

    output(rows,cols,arr1);
    output(rows,cols,arr2);

    sub(rows,cols,arr1,arr2);

    getch();
}
