#include <stdio.h>
#include <string.h>

int main(){

char firstName[10];
    firstName[0]='J';
    firstName[1]='a';
    firstName[2]='m';
    firstName[3]='e';
    firstName[4]='s';
    printf("First Name: %s\n", firstName);

char lastName[10];
    strncpy(lastName, "Dangbis", 10);
    printf("Last Name: %s\n\n", lastName);

const int x = 5;
int a = 1;
int b = 2;
int c = 3;
int d = 4;
int e = 5;

int sum1 = a + x;
int sum2 = b + x;
int sum3 = c + x;
int sum4 = d + x;
int sum5 = e + x;

int diff1 = a - x;
int diff2 = b - x;
int diff3 = c - x;
int diff4 = d - x;
int diff5 = e - x;

printf("%d %d %d\n", a, sum1, diff1);
printf("%d %d %d\n", b, sum2, diff2);
printf("%d %d %d\n", c, sum3, diff3);
printf("%d %d %d\n", d, sum4, diff4);
printf("%d %d %d\n", e, sum5, diff5);

return 0;
}