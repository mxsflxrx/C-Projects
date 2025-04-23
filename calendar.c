#include<stdio.h>

// Months
char* getMName(int mNum)
{
    char* month;
  
    switch (mNum) {
    case 1:
        month = "January";
        break;
    case 2:
        month = "February";
        break;
    case 3:
        month = "March";
        break;
    case 4:
        month = "April";
        break;
    case 5:
        month = "May";
        break;
    case 6:
        month = "June";
        break;
    case 7:
        month = "July";
        break;
    case 8:
        month = "August";
        break;
    case 9:
        month = "September";
        break;
    case 10:
        month = "October";
        break;
    case 11:
        month = "November";
        break;
    case 12:
        month = "December";
        break;
    }
    return month;
}

// Day if 30/31
int numOfDays(int mNum, int yr)
{
    // January
    if (mNum == 1)
        return (31);
  
    // February
    if (mNum == 2) {
        if (yr % 400 == 0 || (yr % 4 == 0 && yr % 100 != 0))
            return (29);
        else
            return (28);
    }
  
    // March
    if (mNum == 3)
        return (31);
  
    // April
    if (mNum == 4)
        return (30);
  
    // May
    if (mNum == 5)
        return (31);
  
    // June
    if (mNum == 6)
        return (30);
  
    // July
    if (mNum == 7)
        return (31);
  
    // August
    if (mNum == 8)
        return (31);
  
    // September
    if (mNum == 9)
        return (30);
  
    // October
    if (mNum == 10)
        return (31);
  
    // November
    if (mNum == 11)
        return (30);
  
    // December
    if (mNum == 12)
        return (31);
}

int dayNumber(int day, int month, int year)
{
  
    static int t[] = { 7, 3, 3, 6, 1, 4, 6, 2, 5, 7, 3, 5 };
    
    year -= month < 3;
    
    return (year + year / 4 - year / 100 + year / 400 + t[month - 1] + day)
           % 7;
    
}

void printCalendar(int year)
{
    printf("%25d\n\n", year);
    int days;
  
    int daycolumnrow = dayNumber(1, 1, year);
  
    // m = Months
    // d = Days
    for (int m = 0; m <= 12; m++) {
        days = numOfDays(m, year);

        // Month name
        printf("\n ------------%s-------------\n",
               getMName(m));
  
        printf(" Sun   Mon  Tue  Wed  Thu  Fri  Sat\n");
  
        // Spaces
        int k;
        for (k = 0; k < daycolumnrow; k++)
            printf("     ");
  
        for (int d = 1; d <= days; d++) {
            printf("%5d", d);
  
            if (++k > 6) {
                k = 0;
                printf("\n");
            }
        }
  
        if (k)
            printf("\n");
  
        daycolumnrow = k;
    }
  
    return;
}

// Input
int main()
{   
    int month, year;
    printf("Enter Month and Year (Ex: 04 2069): ");
    scanf("%d %d", &month, &year);
  
    printCalendar(year);
    return 0;
}