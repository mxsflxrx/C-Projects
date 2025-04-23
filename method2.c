#include<stdio.h>

int cube(int);

int main(){

    int n, n2;
    
    printf("Enter Number: ");
    scanf("%d", &n);

    n2=cube(n);
    printf("The cube of %d is %d", n, n2);

    return 0;
}

int cube(int a){
    return a*a*a;
}