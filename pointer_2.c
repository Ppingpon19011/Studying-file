#include<stdio.h>
int main(){

    int x=10;
    int *ptr;

    printf("x = %d\n",x);
    printf("Address X = %p\n",&x);
    printf("Address ptr = %p\n\n",&ptr);

    ptr=&x;

    printf("ptr -> x\n");
    printf("ptr = %d\n",*ptr);
    printf("Address x by ptr = %p\n",ptr);

    

    return 0;
}