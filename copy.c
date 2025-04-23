#include<stdio.h>

int main(){

    int age = 69;
    int * pAge = &age;
    double gpa = 6.9;
    double * pGpa = &gpa;
    char grade = 'N';
    char * aGrade = &grade;

    printf("age's memory address: %p\n", &pAge);

    return 0;
}