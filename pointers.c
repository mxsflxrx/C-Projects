#include<stdio.h>

int main(){

int x = 69;
int y = 420;
int * pX = &x;
int * pY = &y;

double math = x + * pX;
double math2 = y + * pY;

printf("%d", &math);

printf("\n");

printf("%d", &math2);

printf("\n");

   return 0; 
}