#include<stdio.h>

int date(int date, int month, int year);
int is_leap_year(int year2);
int is_leap_year2(int year);

int main(void){
    int day1, month1, year1, day2, month2, year2;
    int day_diff, month_diff, year_diff;         

    printf("From (MM/DD/YYYY): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);

    printf("To (MM/DD/YYYY): ");
    scanf("%d/%d/%d", &month2, &day2, &year2);

    if(!date(day1, month1, year1)){
        printf("THERE WAS AN ERROR.\n");        
        }

    if(!date(day2, month2, year2)){
        printf("THERE WAS AN ERROR.\n");
        return 0;
}       

    if(day2 < day1){ //date execution
        if (month2 == 2){
            if (is_leap_year(year2)){
                day2 += 29;
            }else{
                day2 += 28;
            }                        
        }else if (month2 == 4 || month2 == 6 || month2 == 9 || month2 == 11) {
           day2 += 30; 
        }else{
           day2 += 31;
        }
    month2 = month2 - 1; //borrow from month
    }

    if (month2 < month1){
        month2 += 12;
        year2 -= 1; //borrow from year
    }       

    if(day2>day1){
        day_diff = day2 - day1;
    }else{
        day_diff = day1 - day2;
    }
    
    if(month2>month1){
        month_diff = month2 - month1;
    }else{
        month_diff = month1 - month2;
    }
    
    if(year2>year1){
        year_diff = year2 - year1;
    }else{
        year_diff = year1 - year2;
    }

    printf("Difference: %d years, %d months, and %d days.", year_diff, month_diff, day_diff);
    return 0;
}

int date(int day, int month, int year){
    int valid = 1, leap = 0;

    if (year >= 1800 && year <= 9999) {

        if (is_leap_year2(year)) {
            leap = 1;
        }

        if(month >= 1 && month <= 12){
            if (month == 2){
                if (leap && day == 29) {
                    valid = 1;
                }else if(day > 28) {
                    valid = 0;
                }
            }else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
                if (day > 31){
                    valid = 0;
                }
            }else if(day > 30){            
                valid = 0;
            }        
        }else{
            valid = 0;
        }
    }else{
        valid = 0;
    }

    return valid;
}

int is_leap_year(int year2){
    ((year2 % 4 == 0 && year2 % 100 != 0) || (year2 % 400 == 0));
    return year2;
}

int is_leap_year2(int year){
    ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    return year;
}