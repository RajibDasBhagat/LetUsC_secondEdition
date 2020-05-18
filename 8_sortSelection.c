
#include "array1D_input_output.c"


void selectionSort(int arr[], int noElements){
    //selectionSort
    printf("_______________\n");
    int i,j,min,temp;
    for(i=0;i<noElements-1;i++){
            min=i;
            for(j=i+1;j<noElements;j++){
                if(arr[j]<arr[min]){
                    min=j;
                }
            }
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;

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
    //selectionSort
    selectionSort(arr,noElements);
    //output
    output(arr,noElements);

    getch();
}
