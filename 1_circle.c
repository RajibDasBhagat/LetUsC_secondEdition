
#include<stdio.h>
#include<conio.h>

void main(){

    float radius,area,circumference;
    float pi=3.14;

    printf("Enter the radius of circle: ");
    scanf("%f",&radius);

    area = pi * radius * radius;
    circumference = 2 * pi * radius;


    printf("\n *****Circle Details***** \n");
    printf("----------------------\n");
    printf("Radius: %.2f \n",radius);
    printf("Area: %.2f \n",area);
    printf("Perimeter: %.2f \n",circumference);
    printf("______________________\n");

    getch();
}
