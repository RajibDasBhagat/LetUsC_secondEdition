

#include<stdio.h>
#include<conio.h>
#include "array1D_input_output.c"

void main(){
    int i,j,noElements;

    printf("No. of Elements: ");
    scanf("%d",&noElements);
    int arr[noElements];

    //fill the array with numbers
    for(i=0;i<noElements;i++){
        arr[i]=i+1;
    }
    //starting from second element set all its multiples to zero.
    //similarly repeat the process.

    for(i=1;i<noElements;i++){
        if(arr[i] != 0){
            for(j=2*arr[i]-1;j<noElements; j += arr[i]){
                arr[j]=0;
            }
        }
        output(arr,noElements);
        printf("\n");
    }
    //print the non-zero elements
    int countPrime=0;
    printf("Primes: ");
    for(i=1;i<noElements;i++){
        if(arr[i]!=0){
            printf("%d ",arr[i]);
            countPrime++;
        }
    }
    printf("\nTotal prime numbers: %d", countPrime);

    getch();
}
