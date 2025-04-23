#include<stdio.h>

int dayNumber(int year) {

  int d;
  d = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;
  return d;
}

int main(){

int day, month, year, monthinput, dayinmomf, daycolumn, dayrow;

    printf("Enter Month and Year(Ex:04 2069): ");
    scanf("%d %d", &monthinput, &year);

char* momfs[] = {"January",
                "February",
                "March",
                "April",
                "May",
                "June",
                "July",
                "August",
                "September",
                "October",
                "November",
                "December"};

int daysofmomf[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

if ( year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) 
       daysofmomf[1] = 29;

daycolumn = dayNumber(year);

switch(monthinput){
    case 01:
        for (month = 0; month < 1; month++) {
            dayinmomf = daysofmomf[ month];
            printf("\n\n-----------------%s %d-----------------\n", momfs[month], year);
            printf("\n  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
            
            for (dayrow = 0; dayrow < daycolumn; dayrow++)
        printf("     ");
        
            for (day = 1; day <= dayinmomf; day++) {
        printf("%5d", day);

        if (++dayrow > 6){
            printf("\n");
            dayrow = 0;
            }
        daycolumn = dayrow;
         }
    };
    break;

    case 02:
        for (month = 1; month < 2; month++) {
            dayinmomf = daysofmomf[ month];
            printf("\n\n-----------------%s %d-----------------\n", momfs[month], year);
            printf("\n  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
            
            for (dayrow = 0; dayrow < daycolumn; dayrow++)
        printf("     ");
        
            for (day = 1; day <= dayinmomf; day++) {
        printf("%5d", day);

        if (++dayrow > 6){
            printf("\n");
            dayrow = 0;
            }
        daycolumn = dayrow;
         }
    };
    break;

    case 03:
        for (month = 2; month < 3; month++) {
            dayinmomf = daysofmomf[ month];
            printf("\n\n-----------------%s %d-----------------\n", momfs[month], year);
            printf("\n  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
            
            for (dayrow = 0; dayrow < daycolumn; dayrow++)
        printf("     ");
        
            for (day = 1; day <= dayinmomf; day++) {
        printf("%5d", day);

        if (++dayrow > 6){
            printf("\n");
            dayrow = 0;
            }
        daycolumn = dayrow;
         }
    };
    break;

    case 04:
        for (month = 3; month < 4; month++) {
            dayinmomf = daysofmomf[ month];
            printf("\n\n-----------------%s %d-----------------\n", momfs[month], year);
            printf("\n  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
            
            for (dayrow = 0; dayrow < daycolumn; dayrow++)
        printf("     ");
        
            for (day = 1; day <= dayinmomf; day++) {
        printf("%5d", day);

        if (++dayrow > 6){
            printf("\n");
            dayrow = 0;
            }
        daycolumn = dayrow;
         }
    };
    break;

    case 05:
        for (month = 4; month < 5; month++) {
            dayinmomf = daysofmomf[ month];
            printf("\n\n-----------------%s %d-----------------\n", momfs[month], year);
            printf("\n  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
            
            for (dayrow = 0; dayrow < daycolumn; dayrow++)
        printf("     ");
        
            for (day = 1; day <= dayinmomf; day++) {
        printf("%5d", day);

        if (++dayrow > 6){
            printf("\n");
            dayrow = 0;
            }
        daycolumn = dayrow;
         }
    };
    break;

    case 06:
        for (month = 5; month < 6; month++) {
            dayinmomf = daysofmomf[ month];
            printf("\n\n-----------------%s %d-----------------\n", momfs[month], year);
            printf("\n  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
            
            for (dayrow = 0; dayrow < daycolumn; dayrow++)
        printf("     ");
        
            for (day = 1; day <= dayinmomf; day++) {
        printf("%5d", day);

        if (++dayrow > 6){
            printf("\n");
            dayrow = 0;
            }
        daycolumn = dayrow;
         }
    };
    break;

    case 07:
        for (month = 6; month < 7; month++) {
            dayinmomf = daysofmomf[ month];
            printf("\n\n-----------------%s %d-----------------\n", momfs[month], year);
            printf("\n  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
            
            for (dayrow = 0; dayrow < daycolumn; dayrow++)
        printf("     ");
        
            for (day = 1; day <= dayinmomf; day++) {
        printf("%5d", day);

        if (++dayrow > 6){
            printf("\n");
            dayrow = 0;
            }
        daycolumn = dayrow;
         }
    };
    break;

    case 8:
        for (month = 7; month < 8; month++) {
            dayinmomf = daysofmomf[ month];
            printf("\n\n-----------------%s %d-----------------\n", momfs[month], year);
            printf("\n  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
            
            for (dayrow = 0; dayrow < daycolumn; dayrow++)
        printf("     ");
        
            for (day = 1; day <= dayinmomf; day++) {
        printf("%5d", day);

        if (++dayrow > 6){
            printf("\n");
            dayrow = 0;
            }
        daycolumn = dayrow;
         }
    };
    break;

    case 9:
        for (month = 8; month < 9; month++) {
            dayinmomf = daysofmomf[ month];
            printf("\n\n-----------------%s %d-----------------\n", momfs[month], year);
            printf("\n  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
            
            for (dayrow = 0; dayrow < daycolumn; dayrow++)
        printf("     ");
        
            for (day = 1; day <= dayinmomf; day++) {
        printf("%5d", day);

        if (++dayrow > 6){
            printf("\n");
            dayrow = 0;
            }
        daycolumn = dayrow;
         }
    };
    break;

    case 10:
        for (month = 9; month < 10; month++) {
            dayinmomf = daysofmomf[ month];
            printf("\n\n-----------------%s %d-----------------\n", momfs[month], year);
            printf("\n  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
            
            for (dayrow = 0; dayrow < daycolumn; dayrow++)
        printf("     ");
        
            for (day = 1; day <= dayinmomf; day++) {
        printf("%5d", day);

        if (++dayrow > 6){
            printf("\n");
            dayrow = 0;
            }
        daycolumn = dayrow;
         }
    };
    break;

    case 11:
        for (month = 10; month < 11; month++) {
            dayinmomf = daysofmomf[ month];
            printf("\n\n-----------------%s %d-----------------\n", momfs[month], year);
            printf("\n  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
            
            for (dayrow = 0; dayrow < daycolumn; dayrow++)
        printf("     ");
        
            for (day = 1; day <= dayinmomf; day++) {
        printf("%5d", day);

        if (++dayrow > 6){
            printf("\n");
            dayrow = 0;
            }
        daycolumn = dayrow;
         }
    };
    break;

    case 12:
        for (month = 11; month < 12; month++) {
            dayinmomf = daysofmomf[ month];
            printf("\n\n-----------------%s %d-----------------\n", momfs[month], year);
            printf("\n  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
            
            for (dayrow = 0; dayrow < daycolumn; dayrow++)
        printf("     ");
        
            for (day = 1; day <= dayinmomf; day++) {
        printf("%5d", day);

        if (++dayrow > 6){
            printf("\n");
            dayrow = 0;
            }
        daycolumn = dayrow;
         }
    };
    break;

    default:
    printf("ERROR!");
}

    return 0;
}