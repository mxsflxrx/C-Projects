#include<stdio.h>
int main(){
int a;

printf("Enter Number: ");
scanf("%d", &a);

for(int s=1; s<=a; s+=1){
    printf("%d + %d = %d\n", s, a, a+s);
}

    return 0;
}