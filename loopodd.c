#include<stdio.h>

int main(){
int a;
printf("Enter Number: ");
scanf("%d", &a);

for(int n = 1; n<=a; n+=2){
   printf("Odd Numbers: %d\n", n);
}

    return 0;
}