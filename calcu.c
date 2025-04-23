#include<stdio.h>

int main(){

    double x,y,result;
    char operator;

    printf("Use operators + - * /.\n");
    printf("Enter expression: ");
    scanf("%lf %c %lf", &x, &operator, &y);
    printf("\n---------------------------------\n");
    switch(operator){
        case '+':
            result=x+y;
            printf("Sum: %g\n", result);
            break;
        case '-':
            result=x-y;
            printf("Difference: %g\n", result);
            break;
        case '*':
            result=x*y;
            printf("Product: %g\n", result);
            break;
        case '/':
            if (y!=0){
                result=x/y;
                printf("Quotient: %g\n", result);
            }else{
                printf("Error: division by zero\n");
            }
            break;
        default:
            printf("You entered an invalid expression. Try it again!\n");
    }
    printf("---------------------------------\n");

    return 0;
}