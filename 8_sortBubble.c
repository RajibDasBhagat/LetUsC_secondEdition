#include "array1D_input_output.c"

void bubbleSort(int arr[], int noElements){
    //bubbleSort
    printf("________________\n");
    int i,j,min,temp;
    for(i=0;i<noElements-1;i++){
            for(j=0;j<noElements-1-i;j++){
                if(arr[j]>arr[j+1]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
            output(arr,noElements);
            printf("\n");
    }
}

void main(){
    int i,noElements;
    //inputs
    printf("No. of Elements: ");
    scanf("%d",&noElements);
    int arr[noElements];

    //input
    input(arr,noElements);
    //bubblesort
    bubbleSort(arr,noElements);
    //output
    output(arr,noElements);

    getch();
}
