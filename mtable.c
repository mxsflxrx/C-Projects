// Display NxN multiplication table

#include<stdio.h>

int main(){
int a;

    printf("Enter Number: ");
    scanf("%d", &a);
    printf("%d x %d Multiplication Table\n", a, a);
    
for(int n=1; n<=a; n++){
    for(int m=1; m<=a; m++){
        printf("%5d",n*m);
    }
        printf("\n");
}

    return 0;
} 