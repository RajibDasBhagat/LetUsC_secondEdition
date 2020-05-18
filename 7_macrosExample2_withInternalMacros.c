#include<stdio.h>
#include<conio.h>

#define CIRCUMFERENCEC(radius)(2*3.14*radius)
#define AREAC(radius)(3.14*radius*radius)
#define PERIMETERR(length,breadth)(2*(length+breadth))
#define AREAR(length,breadth)(length*breadth)

void main(){
    printf("-----CIRCLE-----\n");

    float radiusC,areaC,circumferenceC;
    printf("Radius: ");
    scanf("%f",&radiusC);

    areaC=AREAC(radiusC);
    circumferenceC=CIRCUMFERENCEC(radiusC);

    printf("\nArea: %.2f",areaC);
    printf("\nCircumference: %.2f",circumferenceC);

    printf("\n \n-----RECTANGLE-----");

    float lengthR,breadthR,areaR,perimeterr;
    printf("\nLength: ");
    scanf("%f",&lengthR);
    printf("Breadth: ");
    scanf("%f",&breadthR);

    areaR=AREAR(lengthR,breadthR);
    perimeterr=PERIMETERR(lengthR,breadthR);

    printf("\nArea: %.2f",areaR);
    printf("\nCircumference: %.2f",perimeterr);

    getch();
}

