#include<stdio.h>
int main(){
    
    int age[3];
    int i;

    for(i=0;i<3;i++){
        printf("#%d , Please enter your age : ",i+1);
        scanf("%d", &age[i]);
    }
    printf("\n");
    for(i=0;i<3;i++)
        printf("No@%d is %d years old\n",i+1,age[i]);

    return 0;
}