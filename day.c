#include<stdio.h>

int main(){

int day;

printf("Choices: 1, 2, 3, 4, 5, 6, 7\n");
printf("Enter a Number among the choices: ");
scanf("%d", &day);

switch(day){
    case 1:
       printf("1 is Sunday");
       break;
    case 2:
       printf("2 is Monday");
       break;
    case 3:
       printf("3 is Tuesday");
       break;
    case 4:
       printf("4 is Wednesday");
       break;
    case 5:
       printf("5 is Thursday");
       break;
    case 6:
       printf("6 is Friday");
       break;
    case 7:
       printf("7 is Saturday");
       break;

default:
   printf("ERROR");
}

    return 0;
}