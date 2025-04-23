#include<stdio.h>

int main(){

    char sign;
    double n1, n2, result;
    
    printf("Operators: [+, -, *, /]\n");
    printf("Enter Operator: ");
    scanf("%c", &sign);
    
switch (sign) {
  case '+':
        printf("Enter 1st Number: ");
        scanf("%Lf", &n1);
        printf("Enter 2nd Number: ");
        scanf("%Lf", &n2);
        
        printf("-----------------------------------------------\n");
        printf("Operator: %c", sign);
        printf("\nExpression: %g %c %g", n1, sign, n2);
        result=n1+n2;
        printf("\nResult: %g\n", result);
        printf("-----------------------------------------------");
        break;

  case '-':
        printf("Enter 1st Number: ");
        scanf("%Lf", &n1);
        printf("Enter 2nd Number: ");
        scanf("%Lf", &n2);
        
        printf("-----------------------------------------------\n");
        printf("Operator: %c", sign);
        printf("\nExpression: %g %c %g", n1, sign, n2);
        result=n1-n2;
        printf("\nResult: %g\n", result);
        printf("-----------------------------------------------");
        break;

  case '*':
        printf("Enter 1st Number: ");
        scanf("%Lf", &n1);
        printf("Enter 2nd Number: ");
        scanf("%Lf", &n2);
        
        printf("-----------------------------------------------\n");
        printf("Operator: %c", sign);
        printf("\nExpression: %g %c %g", n1, sign, n2);
        result=n1*n2;
        printf("\nResult: %g\n", result);
        printf("-----------------------------------------------");
        break;
        
  case '/':
        printf("Enter 1st Number: ");
        scanf("%Lf", &n1);
        printf("Enter 2nd Number: ");
        scanf("%Lf", &n2);
        
        if(!n2){
          printf("Divisor can't be 0.");
        }else{
        printf("-----------------------------------------------\n");
        printf("Operator: %c", sign);
        printf("\nExpression: %g %c %g", n1, sign, n2);
        result=n1/n2;
        printf("\nResult: %g\n", result);
        printf("-----------------------------------------------");
        }
        break;

  default:
        printf("ERROR!");
}
    
    return 0; 
}