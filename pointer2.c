#include<stdio.h>

int main(){
    char a='5';
    char *ptra=&a;
    printf("%p\n",ptra);
    printf("%p",ptra+2);
}