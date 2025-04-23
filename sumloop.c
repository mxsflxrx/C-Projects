// Get the sum of all the digits of an entered value 

#include <stdio.h>
int main(){
int a, b, n, sum=0;

   printf("Enter Digit(s): ");
   scanf("%d", &a);

   b = a;

   while (b != 0)
      {
         n = b % 10;
         sum = sum + n;
         b = b / 10;
      }

   printf("Sum of %d is: %d\n", a, sum);

   return 0;
}