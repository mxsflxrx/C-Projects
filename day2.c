#include<stdio.h>

int main(){

int day;

printf("Choices: 1, 2, 3, 4, 5, 6, 7\n");
printf("Enter a Number among the choices: ");
scanf("%d", &day);

if(day == 1){
   printf("1 is Sunday");
}else if(day == 2){
   printf("2 is Monday");
}else if(day == 3){
   printf("3 is Tuesday");
}else if(day == 4){
   printf("4 is Wednesday");
}else if(day == 5){
   printf("5 is Thursday");
}else if(day == 6){
   printf("6 is Friday");
}else if(day == 7){
   printf("7 is Saturday");
}else{
    printf("ERROR");
}

    return 0;
}