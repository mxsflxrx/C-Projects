#include<stdio.h>

int main (){

//given numbers
int a = 6;
int b = 9;
int c = 4;
int d = 20;
int e = 69;

//solution
double ave = (double) (a + b + c + d + e)/5;

   printf("Numbers: %d, %d, %d, %d, %d\n", a, b, c, d, e);
   printf("Average: %.2f", ave);

    return 0;
}