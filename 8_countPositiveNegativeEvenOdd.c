
#include<stdio.h>
#include<conio.h>

void main(){
    int positive=0, negative=0, even=0, odd=0;
    int i,noElements;

    printf("No. of Elements: ");
    scanf("%d",&noElements);

    int arr[noElements];
    for(i=0;i<noElements;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<noElements;i++){
        //printf("%d ",arr[i]);
        arr[i]>=0? positive++:negative++ ;
        arr[i]%2==0? even++:odd++;
    }

    printf("Positive: %d\n",positive);
    printf("Negative: %d\n",negative);
    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);

    getch();
}
