#include<stdio.h>

int main(){
   int prelim, midterm, final;

   printf("Prelim: ");
   scanf("%d", &prelim);
   
   printf("Midterm: ");
   scanf("%d", &midterm);
   
   printf("Final: ");
   scanf("%d", &final);

double finalrating = (double) (prelim)*.3 + (midterm)*.3 + (final)*.4;

   printf("Final Rating = %.2f", finalrating);

return 0;
}