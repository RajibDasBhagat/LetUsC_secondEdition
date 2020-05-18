
#include "array2D_input_output.c"

void transpose(int rows, int cols,int arr[][cols]){
    int i,j,temp;
    for(i=0;i<rows;i++){
        for(j=i+1;j<rows;j++){
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
}
void main(){
    int rows,cols;

    printf("Rows: ");
    scanf("%d",&rows);
    printf("Cols: ");
    scanf("%d",&cols);
    int arr[rows][cols];

    input(rows,cols,arr);
    transpose(rows,cols,arr);
    output(rows,cols,arr);

    getch();
}
