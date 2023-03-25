#include<stdio.h>
int main(){
    int arr[]={1,2,3,4};
    int *arrptr=arr;
    printf("the adress of ist elemnt is %d\n",&arr[0]);
    printf("the address of 2nd element is%d\n",arr+1);
    printf("the adress of 3rd is %d\n",arr+2);
    printf("the adress of 4th is %d\n",arr+3);
    // *arrptr++;
    
    
    printf("the value at adress of ist elemnt is %d\n",*(&arr[0]));
    printf("the value at address of 2nd element is %d\n",*(arr+1));
    printf("the value at adress of 3rd is %d\n",*(arr+2));
    printf("the value at adress of 4th is %d\n",*(arr+3)); 
}