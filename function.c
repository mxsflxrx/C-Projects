#include<stdio.h>

//Functions
int addition(int a, int b){
    int sum;
    sum=a+b;
    return sum;
}

int subtraction(int a, int b){
    int difference;
    difference=a-b;
    return difference;
}

int multiplication(int a, int b){
    int product;
    product=a*b;
    return product;
}

int division(int a, int b){
    int quotient;
    quotient=a/b;
    return quotient;
}

//Drive Code
int main(){

    int n1, n2;
    
    printf("Enter 2 numbers(n n): ");
    scanf("%d %d", &n1, &n2);

    int sum2=addition(n1, n2);
    int diff=subtraction(n1, n2);
    int prd=multiplication(n1, n2);
    int quo=division(n1, n2);

    printf("The sum of %d and %d is %d\n", n1, n2, sum2);
    printf("The difference of %d and %d is %d\n", n1, n2, diff);
    printf("The product of %d and %d is %d\n", n1, n2, prd);
    if (n2==0){
        printf("ERROR");
    }else{
        printf("The quotient of %d and %d is %d", n1, n2, quo);
    }
    return 0;
}