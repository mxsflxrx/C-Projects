#include<stdio.h>

int main(){
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

//FORMULAS
double cm = (double) (number)*0.39;
double m = (double) (number)*3.28;
double km = (double) (number)*0.62;
double kg = (double) (number)*2.20;
double in = (double) (number)*2.54;
double ft = (double) (number)*0.30;
double mi = (double) (number)*1.60;
double lbs = (double) (number)*0.45;

//CONVERSION
    printf("METRIC\n");
    printf("%d cm = %.2f in\n", number, cm);
    printf("%d m = %.2f ft\n", number, m);
    printf("%d km = %.2f mi\n", number, km);
    printf("%d kg = %.2f lb\n\n", number, kg);
    printf("ENGLISH\n");
    printf("%d in = %.2f cm\n", number, in);
    printf("%d ft = %.2f m\n", number, ft);
    printf("%d mi = %.2f km\n", number, mi);
    printf("%d lbs = %.2f kg\n", number, lbs);

    return 0;
}