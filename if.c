#include<stdio.h>

int main(){

int a, b;

printf("Enter a number: ");
scanf("%d", &a);
printf("Enter a number: ");
scanf("%d", &b);
   
if(a>b){
    printf("%d is greater than %d", a, b);
}else if(a<b){
    printf("%d is greater than %d", b, a);
}
    return 0;
}