#include<stdio.h>
int main(){
    int var=2;
    int *ptr=&var;
    
    printf("Adress of pointer var = %p\n",&var);
    printf("Adress of pointer var = %p\n",ptr);
    printf("var = %p\n",var);
    printf("ptr = %p\n",*ptr);
    printf("%d\n",&var);
    printf("%d\n",ptr);
    printf("%d\n",var);
    printf("%d\n",*ptr);
}