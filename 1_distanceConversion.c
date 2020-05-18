#include<stdio.h>
#include<conio.h>

void main(){
    float km,m,ft,inch,cm;
    printf("Enter the distance (in Km): ");
    scanf("%f",&km);

    m=km*1000;
    cm=m*100;
    inch=cm/2.54;
    ft=inch/12;

    printf("*****Distance Conversion***** \n");
    printf("----------------------\n");
    printf("Given distance (in km) : %.2f \n",km);
    printf("distance (in m) : %.2f \n",m);
    printf("distance (in ft) : %.2f \n",ft);
    printf("distance (in inch) : %.2f \n",inch);
    printf("distance (in cm) : %.2f \n",cm);
    printf("______________________\n");

    getch();
}
