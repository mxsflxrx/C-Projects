#include<stdio.h>

int main (){
    double weight, height, bmi;

    printf("Enter Weight: ");
    scanf("%Lf", &weight);
    printf("Enter Height: ");
    scanf("%Lf", &height);

    bmi = weight/(height*height);

    printf("Your BMI is %.2f", bmi);

    return 0;
}