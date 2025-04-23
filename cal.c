#include <stdio.h>

int firstWeekday(int year) {

  int d;
  d = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;
  return d;
}

int main () {
    
    int day, month, chosenMonth, daysInMonth, year, startingDay, weekDay;
  
    printf("Enter your desired month and year (mm/yyyy): ");
    scanf("%d/%d", &chosenMonth, &year);
    
    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int monthDay[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if ((year % 4 == 0 && year % 100 != 0) || year % 400==0) 
       monthDay[1] = 29;
       
    startingDay = firstWeekday(year);

switch (chosenMonth) {

case 1:
for (month = 0; month < 1; month++) {
            daysInMonth = monthDay[ month];
            printf("\n\n-----------------%s %d-----------------\n", months[month], year);
            printf("\n  Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n");
            
            for (weekDay = 0; weekDay < startingDay; weekDay++)
        printf("     ");
        
            for (day = 1; day <= daysInMonth; day++) {
        printf("%5d", day);

        if (++weekDay > 6){
            printf("\n");
            weekDay = 0;
            }
        startingDay = weekDay;
         }
    };
    break;

case 2:
for (month = 1; month < 2; month++) {
            daysInMonth = monthDay[ month];
            printf("\n\n-----------------%s %d-----------------\n", months[month], year);
            printf("\n  Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n");
            
            for (weekDay = 0; weekDay < startingDay; weekDay++)
        printf("     ");
        
            for (day = 1; day <= daysInMonth; day++) {
        printf("%5d", day);

        if (++weekDay > 6){
            printf("\n");
            weekDay = 0;
            }
        startingDay = weekDay;
         }
    };
    break;

case 3:
for (month = 2; month < 3; month++) {
            daysInMonth = monthDay[ month];
            printf("\n\n-----------------%s %d-----------------\n", months[month], year);
            printf("\n  Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n");
            
            for (weekDay = 0; weekDay < startingDay; weekDay++)
        printf("     ");
        
            for (day = 1; day <= daysInMonth; day++) {
        printf("%5d", day);

        if (++weekDay > 6){
            printf("\n");
            weekDay = 0;
            }
        startingDay = weekDay;
         }
    };
    break;

case 4:
for (month = 3; month < 4; month++) {
            daysInMonth = monthDay[ month];
            printf("\n\n-----------------%s %d-----------------\n", months[month], year);
            printf("\n  Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n");
            
            for (weekDay = 0; weekDay < startingDay; weekDay++)
        printf("     ");
        
            for (day = 1; day <= daysInMonth; day++) {
        printf("%5d", day);

        if (++weekDay > 6){
            printf("\n");
            weekDay = 0;
            }
        startingDay = weekDay;
         }
    };
    break;

case 5:
for (month = 4; month < 5; month++) {
            daysInMonth = monthDay[ month];
            printf("\n\n-----------------%s %d-----------------\n", months[month], year);
            printf("\n  Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n");
            
            for (weekDay = 0; weekDay < startingDay; weekDay++)
        printf("     ");
        
            for (day = 1; day <= daysInMonth; day++) {
        printf("%5d", day);

        if (++weekDay > 6){
            printf("\n");
            weekDay = 0;
            }
        startingDay = weekDay;
         }
    };
    break;

case 6:
for (month = 5; month < 6; month++) {
            daysInMonth = monthDay[ month];
            printf("\n\n-----------------%s %d-----------------\n", months[month], year);
            printf("\n  Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n");
            
            for (weekDay = 0; weekDay < startingDay; weekDay++)
        printf("     ");
        
            for (day = 1; day <= daysInMonth; day++) {
        printf("%5d", day);

        if (++weekDay > 6){
            printf("\n");
            weekDay = 0;
            }
        startingDay = weekDay;
         }
    };
    break;

case 7:
for (month = 6; month < 7; month++) {
            daysInMonth = monthDay[ month];
            printf("\n\n-----------------%s %d-----------------\n", months[month], year);
            printf("\n  Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n");
            
            for (weekDay = 0; weekDay < startingDay; weekDay++)
        printf("     ");
        
            for (day = 1; day <= daysInMonth; day++) {
        printf("%5d", day);

        if (++weekDay > 6){
            printf("\n");
            weekDay = 0;
            }
        startingDay = weekDay;
         }
    };
    break;

case 8:
for (month = 7; month < 8; month++) {
            daysInMonth = monthDay[ month];
            printf("\n\n-----------------%s %d-----------------\n", months[month], year);
            printf("\n  Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n");
            
            for (weekDay = 0; weekDay < startingDay; weekDay++)
        printf("     ");
        
            for (day = 1; day <= daysInMonth; day++) {
        printf("%5d", day);

        if (++weekDay > 6){
            printf("\n");
            weekDay = 0;
            }
        startingDay = weekDay;
         }
    };
    break;

case 9:
for (month = 8; month < 9; month++) {
            daysInMonth = monthDay[ month];
            printf("\n\n-----------------%s %d-----------------\n", months[month], year);
            printf("\n  Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n");
            
            for (weekDay = 0; weekDay < startingDay; weekDay++)
        printf("     ");
        
            for (day = 1; day <= daysInMonth; day++) {
        printf("%5d", day);

        if (++weekDay > 6){
            printf("\n");
            weekDay = 0;
            }
        startingDay = weekDay;
         }
    };
    break;

case 10:
for (month = 9; month < 10; month++) {
            daysInMonth = monthDay[ month];
            printf("\n\n-----------------%s %d-----------------\n", months[month], year);
            printf("\n  Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n");
            
            for (weekDay = 0; weekDay < startingDay; weekDay++)
        printf("     ");
        
            for (day = 1; day <= daysInMonth; day++) {
        printf("%5d", day);

        if (++weekDay > 6){
            printf("\n");
            weekDay = 0;
            }
        startingDay = weekDay;
         }
    };
    break;

case 11:
for (month = 10; month < 11; month++) {
            daysInMonth = monthDay[ month];
            printf("\n\n-----------------%s %d-----------------\n", months[month], year);
            printf("\n  Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n");
            
            for (weekDay = 0; weekDay < startingDay; weekDay++)
        printf("     ");
        
            for (day = 1; day <= daysInMonth; day++) {
        printf("%5d", day);

        if (++weekDay > 6){
            printf("\n");
            weekDay = 0;
            }
        startingDay = weekDay;
         }
    };
    break;

case 12:
for (month = 11; month < 12; month++) {
            daysInMonth = monthDay[ month];
            printf("\n\n-----------------%s %d-----------------\n", months[month], year);
            printf("\n  Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n");
            
            for (weekDay = 0; weekDay < startingDay; weekDay++)
        printf("     ");
        
            for (day = 1; day <= daysInMonth; day++) {
        printf("%5d", day);

        if (++weekDay > 6){
            printf("\n");
            weekDay = 0;
            }
        startingDay = weekDay;
         }
    };
    break;

    default:
        printf("\nInvalid action.");
    }

    return 0;
}