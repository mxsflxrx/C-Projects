#include<stdio.h>

int main(){
int a;
printf("Enter Number: ");
scanf("%d", &a);

for(int n = 2; n<=a; n+=2){
   printf("Even Numbers: %d\n", n);
}

    return 0;
}