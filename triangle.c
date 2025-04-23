#include<stdio.h>

int main(){

   int a, b, c;

   printf("Enter the length of the sides of the triangle: ");
   scanf("%d %d %d", &a, &b, &c);
   
   if(a + b > c && a + c > b && b + c >a){
      printf("\nValid Triangle");
   }else{
      printf("\nInvalid Triangle");
   }

    return 0;
}