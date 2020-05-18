
#include<stdio.h>
#include<conio.h>

void main(){
    float sellingPrice,costPrice;
    float profit, loss, profitPercent,lossPercent;

    printf("Enter cost price (in Rs): ");
    scanf("%f",&costPrice);
    printf("Enter selling price (in Rs): ");
    scanf("%f",&sellingPrice);

    if(sellingPrice > costPrice){
        profit = sellingPrice - costPrice;
        profitPercent = profit/costPrice *100;
        printf("Profit is %.2f, and percent is %.2f \n",profit,profitPercent);
    }
    else if(sellingPrice < costPrice){
        loss = costPrice - sellingPrice;
        lossPercent = loss/costPrice *100;
        printf("Loss is %.2f, and percent is %.2f \n",loss,lossPercent);
    }
    else{
        printf("No Profit, No Loss");
    }
    getch();
}
