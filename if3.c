#include<stdio.h>

int main(){

char choice;
double n1, n2, result;

printf("Choices [+, -, *, /]\n");

printf("Enter Choice: ");
scanf("%s", &choice);
printf("Enter a number: ");
scanf("%Lf", &n1);
printf("Enter a number: ");
scanf("%Lf", &n2);

if(choice == '+'){
    result = n1+n2;
    printf("Result: %.2f", result);
}else if(choice == '-'){
    result = n1-n2;
    printf("Result: %.2f", result);
}else if(choice == '*'){
    result = n1*n2;
    printf("Result: %.2f", n1*n2);
}else if(choice == '/'){
    result = n1/n2;
    printf("Result: %.2f", n1/n2);
}

    return 0;
}