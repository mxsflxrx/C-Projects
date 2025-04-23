#include<stdio.h>

double get_fahrenheit(float celsius);
double get_celsius(float fahrenheit);

int main(){
    int n, celsius, fahrenheit;

    printf("Celsius to Fahrenheit or Fahrenheit to Celsius(1, 2): ");
    scanf("%d", &n);

    if(n==1){
            printf("Enter Temperature in Celsius: ");
            scanf("%d", &celsius);

            printf("Temperature in Fahrenheit: %g", get_fahrenheit(celsius));
        }else if(n==2){
            printf("Enter Temperature in Fahrenheit: ");
            scanf("%d", &fahrenheit);

            printf("Temperature in Celsius: %g", get_celsius(fahrenheit));
        }else{
            printf("\nInvalid Choice!");
    }
    return 0;
}

double get_fahrenheit(float celsius){
    float fahrenheit;
    fahrenheit = (celsius * 9 / 5) + 32;
    return fahrenheit;
}

double get_celsius(float fahrenheit){
    float celsius;
    celsius = (fahrenheit - 32) / 1.8;
    return celsius;
}