#include<stdio.h>

long factorial(int num);

int main(){
    
    int num, n2;
    printf("Enter Number: ");
    scanf("%d", num);

    n2=factorial(num);
    printf("The factorial of %d is %d", num, n2);
    return 0;
}

long factorial(int num){
    long fact = (long)num;

    for (int a=num-1; a>=1; a--){
        fact = fact*a;
    }

    return fact;
    
}