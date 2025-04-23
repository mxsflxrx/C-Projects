#include<stdio.h>

int main(){

    int n;
    int sum;

    printf("Enter Number: ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++) {
    sum+=i;
    }

    printf("The sum is: %d\n", sum);
    printf("Average: %g", (double)sum/n);

    return 0;
}