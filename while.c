#include<stdio.h>
int main(){
int a;
int n=20;

printf("Enter Number: ");
scanf("%d", &a);

while(a<=n){
    printf("The value is: %d\n", a);
    a++;
}

    return 0;
}