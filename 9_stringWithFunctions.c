
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
    char str1[]="abcdef";
    char str2[]="XYZABC";

    printf("String1:%s  \n",str1);
    printf("String2:%s  \n",str2);
    //length of a string
    int size1,size2;
    size1=strlen(str1);
    printf("String1 len: %d \n",size1);

    //to upper
    strupr(str1);
    printf("toUpper:%s  \n",str1);

    //to lower
    strlwr(str2);
    printf("toLower:%s  \n",str2);

    //to compare
    int result;
    result=strcmp(str1, str2);
    printf("Compare:%d  \n",result);

    strcat(str1, str2);
    printf("Concat:%s  \n",str1);

    strrev(str1);
    printf("Reverse:%s  \n",str1);

}
