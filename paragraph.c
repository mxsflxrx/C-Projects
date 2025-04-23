#include<stdio.h>
#include<string.h>

char get_fullname(char* fullname);
int get_age(int age);
char get_address(char* address);
char get_contactnumber(char* contactnumber);
char get_occupation(char* occupation);

int main(void){
    char fullname[50];
    int age;
    char address[50];
    char contactnumber[20];
    char occupation[50];

    printf("Enter Fullname: ");
    scanf("%[^\n]s", fullname);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Address: ");
    scanf("\n%[^\n]s", address);

    printf("Enter Contact Number: ");
    scanf("\n%[^\n]s", contactnumber);

    printf("Enter Occupation: ");
    scanf("\n%[^\n]s", occupation);

    get_fullname(fullname), get_age(age), get_address(address), get_contactnumber(contactnumber), get_occupation(occupation);
    return 0;
}

char get_fullname(char* fullname){
    return printf("Your fullname is %s. ", fullname);
}

int get_age(int age){
    return printf("Your age is %d. ", age);
}

char get_address(char* address){
    return printf("Your address is %s. ", address);
}

char get_contactnumber(char* contactnumber){
    return printf("Your contact number is %s. ", contactnumber);
}

char get_occupation(char* occupation){
    return printf("Your occupation is %s.", occupation);
}