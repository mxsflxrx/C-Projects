#include<stdio.h>
#include<string.h>

int main (){

char fname[20];
char lname[15];

printf("Enter First Name: ");
scanf("%[^\n]s", fname);

printf("Enter Last Name: ");
scanf("\n%[^\n]s", lname);

printf("Full Name: %s %s ", fname, lname);
return 0;
}