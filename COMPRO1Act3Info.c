#include<stdio.h>
#include<string.h>

int main(){

//info
char fname1[5];
   strncpy(fname1, "Hu", 5);
char lname1[5];
   strncpy(lname1, "Tao", 5);
int age1 = 19;

char fname2[15];
   strncpy(fname2, "Sangonomiya", 15 );
char lname2[10];
   strncpy(lname2, "Kokomi", 10);
int age2 = 19;

char fname3[10];
   strncpy(fname3, "Columbina", 10);
char lname3[15];
   strncpy(lname3, "Damselette", 15);
int age3 = 17;

//table info
printf("First Name           Last Name           Age\n");
printf("%s                   %s                 %d\n", fname1, lname1, age1);
printf("%s          %s              %d\n", fname2, lname2, age2);
printf("%s            %s          %d\n", fname3, lname3, age3);

    return 0;
}