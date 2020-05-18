#include "array1D_input_output.c"


void insertionSort(int arr[], int noElements){
    //insertionSort
    printf("_______________\n");
    int i,j,key;
    for(i=1;i<noElements;i++){
            key=arr[i];
            for(j=i-1;j>=0 && arr[j]>key;j--){
                arr[j+1]=arr[j];
            }
            arr[j+1]=key;

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
    //insertionSort
    insertionSort(arr,noElements);
    //output
    output(arr,noElements);

    getch();
}

