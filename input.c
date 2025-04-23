#include<stdio.h>

int main (){

int a;
int b;
int c;
int d;
int e;

//input numbers here
int number;
	printf("Enter number 1: ");
    scanf("%d", &a);

    printf("Enter number 2: ");
    scanf("%d", &b);

    printf("Enter number 3: ");
    scanf("%d", &c);

    printf("Enter number 4: ");
    scanf("%d", &d);

    printf("Enter number 5: ");
	scanf("%d", &e);
	printf("The numbers are: %d %d %d %d %d. \n", a, b, c, d, e);

double ave = (double) (a + b + c + d + e)/5;

   printf("Numbers: %d, %d, %d, %d, %d\n", a, b, c, d, e);
   printf("Sum: %d\n", a+b+c+d+e);
   printf("Average: %.2f", ave);

    return 0;
}