#include<stdio.h>
int main(){
    int a=34;
    int *ptra=&a;
    printf("%x\n",ptra);
    printf("%x",ptra+2);
} 