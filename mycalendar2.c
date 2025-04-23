// Display the calendar given the month and year

#include<stdio.h>

int dayNumber(int day, int month, int year)
{
  
    int t[] = { 2, 3, 3, 6, 1, 4, 6, 2, 5, 7, 3, 5 };
    
    year -= month < 3;
    
    return (year + year / 4 - year / 100 + year / 400 + t[month - 1] + day)
           % 7;
    
}

int main(){

    int monthinput, year, a, days, m, k, d;

    printf("Enter Month and Year (Ex:04 2069): ");
    scanf("%d %d", &monthinput, &year);

    char* months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int daysofmonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ( year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) 
       daysofmonth[1] = 29;

a = dayNumber(1, 1, year);

switch (monthinput) {
case 1:
    for(m=0; m<1; m++){
        days = daysofmonth[ m];
            printf("\n-----------%s %d-----------\n", months[ m], year);
            printf(" Sun   Mon  Tue  Wed  Thu  Fri  Sat\n");

    for (k = 0; k < a; k++);
        printf("     ");

    for (d = 1; d <= days; d++) {
            printf("%5d", d);
  
            if (++k > 6) {
                k = 0;
                printf("\n");
            }
        }
  
        if (k)
            printf("\n");

        a = k;
    };
    break;

case 2:
    for(m=1; m<2; m++){
        days = daysofmonth[ m];
            printf("\n----------------%s %d----------------\n", months[ m], year);
            printf(" Sun   Mon  Tue  Wed  Thu  Fri  Sat\n");

    for (k = 0; k < a; k++);
        printf("     ");

    for (d = 1; d <= days; d++) {
            printf("%5d", d);
  
            if (++k > 6) {
                k = 0;
                printf("\n");
            }
        }
  
        if (k)
            printf("\n");

        a = k;
    };
    break;

case 3:
    for(m=2; m<3; m++){
        days = daysofmonth[ m];
            printf("\n----------------%s %d----------------\n", months[ m], year);
            printf(" Sun   Mon  Tue  Wed  Thu  Fri  Sat\n");

    for (k = 0; k < a; k++);
        printf("     ");

    for (d = 1; d <= days; d++) {
            printf("%5d", d);
  
            if (++k > 6) {
                k = 0;
                printf("\n");
            }
        }
  
        if (k)
            printf("\n");

        a = k;
    };
    break;

case 4:
    for(m=3; m<4; m++){
        days = daysofmonth[ m];
            printf("\n----------------%s %d----------------\n", months[ m], year);
            printf(" Sun   Mon  Tue  Wed  Thu  Fri  Sat\n");

    for (k = 0; k < a; k++);
        printf("     ");

    for (d = 1; d <= days; d++) {
            printf("%5d", d);
  
            if (++k > 6) {
                k = 0;
                printf("\n");
            }
        }
  
        if (k)
            printf("\n");

        a = k;
    };
    break;

case 5:
    for(m=4; m<5; m++){
        days = daysofmonth[ m];
            printf("\n----------------%s %d----------------\n", months[ m], year);
            printf(" Sun   Mon  Tue  Wed  Thu  Fri  Sat\n");

    for (k = 0; k < a; k++);
        printf("     ");

    for (d = 1; d <= days; d++) {
            printf("%5d", d);
  
            if (++k > 6) {
                k = 0;
                printf("\n");
            }
        }
  
        if (k)
            printf("\n");

        a = k;
    };
    break;

case 6:
    for(m=5; m<6; m++){
        days = daysofmonth[ m];
            printf("\n----------------%s %d----------------\n", months[ m], year);
            printf(" Sun   Mon  Tue  Wed  Thu  Fri  Sat\n");

    for (k = 0; k < a; k++);
        printf("     ");

    for (d = 1; d <= days; d++) {
            printf("%5d", d);
  
            if (++k > 6) {
                k = 0;
                printf("\n");
            }
        }
  
        if (k)
            printf("\n");

        a = k;
    };
    break;

case 7:
    for(m=6; m<7; m++){
        days = daysofmonth[ m];
            printf("\n----------------%s %d----------------\n", months[ m], year);
            printf(" Sun   Mon  Tue  Wed  Thu  Fri  Sat\n");

    for (k = 0; k < a; k++);
        printf("     ");

    for (d = 1; d <= days; d++) {
            printf("%5d", d);
  
            if (++k > 6) {
                k = 0;
                printf("\n");
            }
        }
  
        if (k)
            printf("\n");

        a = k;
    };
    break;

case 8:
    for(m=7; m<8; m++){
        days = daysofmonth[ m];
            printf("\n----------------%s %d----------------\n", months[ m], year);
            printf(" Sun   Mon  Tue  Wed  Thu  Fri  Sat\n");

    for (k = 0; k < a; k++);
        printf("     ");

    for (d = 1; d <= days; d++) {
            printf("%5d", d);
  
            if (++k > 6) {
                k = 0;
                printf("\n");
            }
        }
  
        if (k)
            printf("\n");

        a = k;
    };
    break;

case 9:
    for(m=8; m<9; m++){
        days = daysofmonth[ m];
            printf("\n----------------%s %d----------------\n", months[ m], year);
            printf(" Sun   Mon  Tue  Wed  Thu  Fri  Sat\n");

    for (k = 0; k < a; k++);
        printf("     ");

    for (d = 1; d <= days; d++) {
            printf("%5d", d);
  
            if (++k > 6) {
                k = 0;
                printf("\n");
            }
        }
  
        if (k)
            printf("\n");

        a = k;
    };
    break;

case 10:
    for(m=9; m<10; m++){
        days = daysofmonth[ m];
            printf("\n----------------%s %d----------------\n", months[ m], year);
            printf(" Sun   Mon  Tue  Wed  Thu  Fri  Sat\n");

    for (k = 0; k < a; k++);
        printf("     ");

    for (d = 1; d <= days; d++) {
            printf("%5d", d);
  
            if (++k > 6) {
                k = 0;
                printf("\n");
            }
        }
  
        if (k)
            printf("\n");

        a = k;
    };
    break;

case 11:
    for(m=10; m<11; m++){
        days = daysofmonth[ m];
            printf("\n----------------%s %d----------------\n", months[ m], year);
            printf(" Sun   Mon  Tue  Wed  Thu  Fri  Sat\n");

    for (k = 0; k < a; k++);
        printf("     ");

    for (d = 1; d <= days; d++) {
            printf("%5d", d);
  
            if (++k > 6) {
                k = 0;
                printf("\n");
            }
        }
  
        if (k)
            printf("\n");

        a = k;
    };
    break;

case 12:
    for(m=11; m<12; m++){
        days = daysofmonth[ m];
            printf("\n----------------%s %d----------------\n", months[ m], year);
            printf(" Sun   Mon  Tue  Wed  Thu  Fri  Sat\n");

    for (k = 0; k < a; k++);
        printf("     ");

    for (d = 1; d <= days; d++) {
            printf("%5d", d);
  
            if (++k > 6) {
                k = 0;
                printf("\n");
            }
        }
  
        if (k)
            printf("\n");

        a = k;
    };
    break;
}
    return 0;
}