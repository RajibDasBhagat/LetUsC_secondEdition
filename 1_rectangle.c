
#include<stdio.h>
#include<conio.h>

void main(){

    float length,breadth,area,perimeter;

    printf("Enter the length of rectangle: ");
    scanf("%f",&length);
    printf("Enter the breadth of rectangle: ");
    scanf("%f",&breadth);

    area = length * breadth;
    perimeter = 2*(length + breadth);
    printf("\n *****Rectangle Details***** \n");
    printf("----------------------\n");
    printf("Length: %.2f \n",length);
    printf("Breadth: %.2f \n",breadth);
    printf("Area: %.2f \n",area);
    printf("Perimeter: %.2f \n",perimeter);
    printf("______________________\n");

    getch();
}
