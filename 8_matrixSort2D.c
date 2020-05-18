#include "array2D_input_output.c"

void sort(int rows, int cols,int arr[][cols]){
    int i,j,*temp=arr;
    int t;
    for(i=0;i<rows*cols-1;i++){
        for(j=i+1;j<rows*cols;j++){
            if(*(temp+i)> *(temp+j)){
               t=*(temp+i);
               *(temp+i)=*(temp+j);
               *(temp+j)=t;
            }
        }
        printf("Step: %d \n",i+1);
        output(rows,cols,arr);
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

    output(rows,cols,arr);

    sort(rows,cols,arr);

    getch();
}
