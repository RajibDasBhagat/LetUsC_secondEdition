#include<stdio.h>
#include<conio.h>

int xstrlen(char *s){
    int count=0;
    while(*s != '\0'){
        count++;
        s++;
    }
    return count;
}


void xstrupr(char *s){
    while(*s != '\0'){
        if(*s>=97 && *s<=122){
            *s -= 32;
        }
        s++;
    }
}

void xstrlwr(char *s){
    while(*s != '\0'){
        if(*s>=65 && *s<=90){
            *s += 32;
        }
        s++;
    }
}

int xstrcmp(char *s1, char *s2){
     if(*s1 == *s2){
        return 0;
     }
     else{
        s1++;
        s2++;
        return s1-s2;
     }
}

char xstrcat(char *s1, char *s2){
    s1 = s1+xstrlen(&(*s1));
    while(*s2 != '\0'){
        *s1=*s2;
        s1++;
        s2++;
    }
    *s1='\0';
    return s1;
}



void main(){
    char str1[]="abcdef";
    char str2[]="XYZABC";

    printf("String1:%s  \n",str1);
    printf("String2:%s  \n",str2);
    //length of a string
    int size1,size2;
    size1=xstrlen(&str1);
    printf("String1 len: %d \n",size1);
    size2=xstrlen(&str2);
    printf("String2 len: %d \n",size2);

    //to upper
    xstrupr(&str1);
    printf("toUpper:%s  \n",str1);

    //to lower
    xstrlwr(&str1);
    printf("toLower:%s  \n",str1);

    //to compare
    int result;
    result=xstrcmp(&str1, &str2);
    printf("Compare:%d  \n",result);

    xstrcat(&str1, &str2);
    printf("Concat:%s  \n",str1);

}
