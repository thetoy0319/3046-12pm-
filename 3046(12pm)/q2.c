#include<stdio.h>
 int main(){

    int number;

    printf("enter the nuumber: ");
    scanf("%d",&number);

    if(number %2 == 0){
        printf("Even number");
    }
    else{
        printf("Odd number");
    } 

    return 0;
 }