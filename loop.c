#include<stdio.h>
#include<conio.h>

//Half Pyramid
void main()  
{  
    int i, j, rows;  
    printf (" Enter a number to define the rows: \n ");  
    scanf("%d", &rows);  
    printf("\n");  
    for (i = 1; i <= rows; ++i) // outer loop  
    {  
        for (j = 1; j <= i; ++j) // inner loop  
        {  
            printf ("* "); // print the Star  
        }  
        printf ("\n");   
    }  
    getch();      
}

//Inverted Pyramid
void main()  
{  
    int i, j, rows;  
    printf (" Enter a number to define the rows: \n ");  
    scanf("%d", &rows);   
    printf("\n");  
    for (i = rows; i > 0; i--) // define the outer loop  
    {  
        for (j = i; j > 0; j--) // define the inner loop  
        {  
            printf ("* "); // print the Star  
        }  
        printf ("\n");   
    }  
    getch();      
}

//Q3 Pyramid
void main()  
{  
    int i, j, rows, k;  
    printf (" Enter a number to define the rows: \n ");  
    scanf("%d", &rows);   
    printf("\n");  
    for (i = 1; i <= rows; i++)   
    {  
        for (j = 1; j <= i; j++)   
        {  
            printf(" ");   
        }  
        for (k = i; k <= rows; k++)  
        {  
            printf("*"); // print the Star  
        }  
        printf ("\n");   
    }  
    getch();      
}


//Q4 Pyramid
void main()  
{  
      
    int i, j, rows, k;  
    printf (" Enter a number to define the rows: \n ");  
    scanf("%d", &rows);   
    printf("\n");  
    for (i = 1; i <= rows; i++)   
    {  
        for (j = i; j < rows; j++)  
        {  
            printf(" ");   
        }  
        for (k = 1; k <= i; k++)  
        {  
            printf("*"); // print the Star  
        }  
        printf ("\n");   
    }  
    getch();      
}

//Q2Q4 Pyramid
void main()  
{  
    int num, i, j, m = 1; // declare local variables  
    printf (" Enter the number to define the columns: \n");  
    scanf ("%d", & num);  
    for (i = 1; i <= num; i++)  
    {  
        for (j = 1; j <= i; j++)  
        {  
            printf( "* ");  
        }  
        printf("\n");  
    }  
    for (i = num-1; i >= 1; i--)  
    {  
        for (j = 1; j <= i; j++)  
        {  
            printf ("* ");  
        }  
        printf("\n");  
    }  
    getch();  
}


//Q1Q3 Pyramid
void main()  
{  
    // declare the local variables  
    int i, j, rows, k;  
    printf (" Enter a number to define the columns: \n ");  
    scanf("%d", &rows);   
    printf("\n");  
    for (i = 1; i <= rows; i++)   
    {  
        for (j = i; j < rows; j++)   
        {  
            printf(" ");   
        }  
        for (k = 1; k <= i; k++)  
        {  
            printf("*"); // print the Star  
        }  
        printf ("\n");   
    }  
    for (i = 1; i <= rows; ++i)   
    {  
        for (j = 2; j <= i; j++)  
        {  
            printf(" ");   
        }  
        for (k = i; k <= rows; k++)  
        {  
            printf("*"); // print the Star  
        }  
        printf ("\n");   
    }  
    getch();      
}

//Top Pyramid
void main()  
{  
      
    int i, j, rows, k = 0;  
    printf (" Enter a number to define the rows: \n");  
    scanf ("%d", &rows);   
      
    for ( i =1; i <= rows; i++)  
    {  
        for ( j = 1; j <= rows - i; j++)  
        {  
            printf ("  ");   
        }  
        // use for loop where k is less than equal to (2 * i -1)  
        for ( k = 1; k <= ( 2 * i - 1); k++)  
        {  
            printf ("* "); // print the Star  
        }  
        printf ("\n");  
    }  
    getch();  
}  

//Bottom Pyramid
void main()  
{  
    // declare the local variables  
    int i, j, rows, k, m = 1;  
    printf (" Enter a number to define the rows: \n");  
    scanf ("%d", &rows);   
    printf("\n");  
      
    for ( i = rows; i >= 1; i--)  
    {  
          
        for ( j = 1; j <= m; j++)  
        {  
            printf ("  "); // print the space  
        }  
      
        for ( k = 1; k <= ( 2 * i - 1); k++)  
        {  
            printf ("* "); // print the Star  
        }  
        m++;  
        printf ("\n");  
    }  
    getch();  
}  

//Star
void main()  
{  
    // declare the local variables  
    int i, j, rows, k;  
    printf (" Enter a number to define the rows: \n ");  
    scanf("%d", &rows);   
    int space = rows-1, num=1;  
    printf("\n");  
    for (i = 1; i <= rows; i++)   
    {  
        for (j = 1; j <= space; j++)   
        {  
            printf("  "); / print the number  
        }  
        for ( k= 1; k <= num; k++)  
        {  
            printf(" *");  
        }  
        if(space > i)  
        {  
            space = space -1;  
            num = num+2;  
        }  
        if(space <i)  
        {  
            space = space + 1;  
            num = num -2;  
        }  
        printf("\n");  
    }  
    getch();      
}  

//Number Pyramid Column
void main()  
{  
    // declare the local variables  
    int i, j, rows;  
    printf (" Enter a number to define the rows: \n ");  
    scanf("%d", &rows);   
    printf("\n");  
    for (i = 1; i <= rows; ++i)   
    {  
        for (j = 1; j <= i; ++j)   
        {  
            printf ("%d ", j);   
        }  
        printf ("\n");   
    }  
    getch();      
}  

//Number Pyramid Row
void main()  
{  
    // declare the local variables  
    int i, j, rows;  
    printf (" Enter a number to define the rows: \n ");  
    scanf("%d", &rows);   
    printf("\n");  
    for (i = 1; i <= rows; ++i)   
    {  
        for (j = 1; j <= i; ++j)   
        {  
            printf ("%d ", i); // print the number  
        }  
        printf ("\n");   
    }  
    getch();      
}  

//Inverted Number Pyramid 
void main()  
{  
    // declare the local variables  
    int i, j, rows;  
    printf (" Enter a number to define the rows: \n ");  
    scanf("%d", &rows);   
    printf("\n");  
    for (i = rows; i > 0; i--) // define the outer loop  
    {  
        for (j = i; j > 0; j--) // define the inner loop  
        {  
            printf ("%d ", j);  
        }  
        printf ("\n");  
    }  
    getch();      
}  

//Inverted Number Pyramid
void main()  
{  
    // declare the local variables  
    int i, j, rows, k;  
    printf (" Enter a number to define the rows: \n ");  
    scanf("%d", &rows);   
    printf("\n");  
    for (i = 1; i <= rows; i++)   
    {  
        for (j = i; j < rows; j++)   
        {  
            printf("  ");   
        }  
        for (k = 1; k <= i; k++)  
        {  
            printf(" %d", k);   
        }  
        printf ("\n");   
    }  
    getch();      
}  

//Q3 Number Pyramid Column
void main()  
{  
      // declare the local variables  
int i, j, rows, k;  
printf (" Enter a number to define the rows: \n ");  
scanf("%d", &rows);   
printf("\n");  
for (i = 1; i <= rows; i++)   
{  
        for (j = 1; j <= i; j++)   
             {  
                 printf("  ");   
           }  
        for (k = i; k <= rows; k++)  
            {  
               printf(" %d", k);   
           }  
          printf ("\n");   
 }  
getch();      
}  

//Floyd Triangle
void main()  
{  
    // declare the local variables  
    int i, j, rows, k = 1;  
    printf (" Enter a number to define the rows: \n ");  
    scanf("%d", &rows);   
    printf("\n");  
    for (i = 1; i <= rows; i++)   
    {  
        for (j = 1; j <= i; j++)   
        {  
            printf("%d ", k);   
            k += 1;  
        }  
        printf("\n");  
    }  
    getch();      
}  

//Star Number
void main()  
{  
    // declare the local variables  
    int i, j, rows, k;  
    printf (" Enter a number to define the rows: \n ");  
    scanf("%d", &rows);  
    int space = rows-1, num=1;  
    printf("\n");  
    for (i = 1; i <= rows; i++)  
    {  
        for (j = 1; j <= space; j++)   
        {  
            printf(" ");   
        }  
        for ( k= 1; k <= num; k++)  
        {  
            printf("%d", k);  
        }  
        if(space > i)  
        {  
            space = space -1;  
            num = num+2;  
        }  
        if(space <i)  
        {  
            space = space + 1;  
            num = num -2;  
        }  
        printf("\n");  
    }     
    getch();      
}  

//Number Pyramid
void main()  
{  
    // declare the local variables  
    int i, j, rows, k = 0;  
    printf (" Enter a number to define the rows: \n");  
    scanf ("%d", &rows); // take a number  
      
    for ( i =1; i <= rows; i++)  
    {  
        // inner loop define j should be less than equal to rows- i  
        for ( j = 1; j <= rows - i; j++)  
        {  
            printf ("  "); // print the space  
        }  
        // use for loop where k is less than equal to (2 * i -1)  
        for ( k = 1; k <= ( 2 * i - 1); k++)  
        {  
            printf ("%d ",i); // print the number  
        }  
        printf ("\n");  
    }  
    getch();  
}  

//Inverted Number Pyramid
void main()  
{  
    // declare the local variables  
    int i, j, rows, k, m = 1;  
    printf (" Enter a number to define the rows: \n");  
    scanf ("%d", &rows); // take a number  
    printf("\n");  
    // outer loop define the total rows and i should be greater than equal to 1  
    for ( i = rows; i >= 1; i--)  
    {  
        // inner loop define j should be less than equal to m  
        for ( j = 1; j <= m; j++)  
        {  
            printf ("  ");   
        }  
        for ( k = 1; k <= ( 2 * i - 1); k++)  
        {  
            printf ("%d ", i); // print the number  
        }  
        m++;  
        printf ("\n");  
    }  
    getch();  
}  

//Pascal Triangle
void main()  
{  
    // declare the local variables  
    int i, j, rows, k, m;  
    printf (" Enter a number to define the rows: \n");  
    scanf ("%d", &rows);   
    printf("\n");  
    // outer loop define the total rows and i should be less than equal to rows  
    for ( i = 1; i <= rows; i++)  
    {  
        // inner loop define j should be less than equal to rows- i  
        for ( j = 1; j <= rows-i; j++)  
        {     
            printf (" ");   
        }  
        // use for loop where k is less than equal to i  
        for ( k = 1; k <= i; k++)  
        {  
            printf ("%d", k); // print the number  
        }  
        for (m = i-1; m >=1; m--)  
        {  
            printf("%d", m); // print the number  
        }  
        printf ("\n");  
    }  
    getch();  
}  

//2Halves Number Pyramid Column
void main()  
{  
    // declare the local variables  
    int i, j, rows, k;  
    printf (" Enter a number to define the rows: \n");  
    scanf ("%d", &rows); // take a number  
    printf("\n");  
    for ( i = 1; i <= rows; i++)  
    {  
          
        for ( j = 1; j <= rows; j++)  
        {  
            if( j <= i)  
            printf ("%d", j);   
            else  
            printf(" ");  
        }  
        for (j = rows; j >= 1; j--)  
        {  
            if(j <= i)  
            printf ("%d", j);  
            else  
            printf(" ");  
        }  
        printf ("\n");  
    }  
    getch();  
}  

//Alphabet Pyramid Column
void main()  
{  
    // declare the local variables  
    int i, j, rows;  
    printf (" Enter a number to define the rows: \n ");  
    scanf("%d", &rows);   
    printf("\n");  
    for (i = 1; i <= rows; ++i) // define the outer loop  
    {  
        for (j = 1; j <= i; ++j) // define the inner loop  
        {  
            printf ("%c ", 'A' + j - 1); // print the alphabets   
        }  
        printf ("\n"); // jump to next line  
    }  
    getch();      
}  

//Inverted Alphabet Pyramid Row
void main()  
{     
    // declare the local variables  
    int i, j, rows, ch = 'A';  
    printf (" Enter a number to define the rows: \n ");  
    scanf("%d", &rows);   
    printf("\n");  
    for (i = rows; i > 1; i--)   
    {  
        for (j = 1; j < i; j++)   
        {  
            printf ("%c ", ch);   
        }  
        ch++;  
        printf ("\n");  
    }  
    getch();  
}  

//Q1 Alphabet Pyramid Row
void main()  
{  
    // declare the local variables  
    int i, j, rows, k, ch='A';  
    printf (" Enter a number to define the rows: \n ");  
    scanf("%d", &rows);   
    printf("\n");  
    for (i = 1; i <= rows; i++)   
    {  
        for (j = i; j < rows; j++)   
        {  
            printf("  ");   
        }  
        for (k = 1; k <= i; k++)  
        {  
            printf(" %c", ch);  
        }  
        ch++;  
        printf ("\n");   
    }  
    getch();      
}  

//Q3 Alphabet Pyramid Column
void main()  
{  
        
int i, j, rows, k;  
printf (" Enter a number to define the rows: \n ");  
scanf("%d", &rows);   
printf("\n");  
for (i = 1; i <= rows; i++)   
{  
        for (j = 1; j <= i; j++)   
             {  
                 printf("  ");   
           }  
        for (k = i; k <= rows; k++)  
            {  
               printf(" %c", 'A' + k);  
           }  
          printf ("\n");   
 }  
getch();      
}  

//Alphabet Pyramid
void main()  
{  
      
    int i, j, rows, k, ch = 'A';  
    printf (" Enter a number to define the rows: \n");  
    scanf ("%d", &rows);   
      
    for ( i =1; i <= rows; i++)  
    {  
          
        for ( j = 1; j <= rows - i; j++)  
        {  
            printf ("  ");   
        }  
        // use for loop where k is less than equal to (2 * i -1)  
        for ( k = 1; k <= ( 2 * i - 1); k++)  
        {  
            printf ("%c ", ch);   
        }  
        ch++;  
        printf ("\n");  
    }  
    getch();  
}  

//Inverted Alphabet Pyramid
void main()  
{     
    // declare the local variables  
    int i, j, rows, k, m = 1;  
    printf (" Enter a number to define the rows: \n");  
    scanf ("%d", &rows);   
    printf("\n");  
      
    for ( i = rows; i >= 1; i--)  
    {  
        for ( j = 1; j <= m; j++)  
        {  
            printf ("  ");   
        }  
        // use for loop where k is less than equal to (2 * i -1)  
        for ( k = 1; k <= ( 2 * i - 1); k++)  
        {  
            printf ("%c ", 'A' + k - 1);   
        }  
        m++;  
        printf ("\n");  
    }  
    getch();  
}  

//Star Alphabet
void main()  
{  
    // declare the local variables  
    int i, j, rows, k;  
    printf (" Enter a number to define the rows: \n ");  
    scanf("%d", &rows);   
    int space = rows-1, num=1;  
    printf("\n");  
    for (i = 1; i <= rows; i++)   
    {  
        for (j = 1; j <= space; j++)   
        {  
            printf(" ");          
                        }  
        for ( k= 1; k <= num; k++)  
        {  
            printf("%c", 'A' + k - 1);  
        }  
        if(space > i)  
        {  
            space = space -1;  
            num = num+2;  
        }  
        if(space <i)  
        {  
            space = space + 1;  
            num = num -2;  
        }  
        printf("\n");  
    }     
    getch();      
}  

//Q2Q4 Alphabet Column
void main()  
{  
    int num, i, j, m = 1; // declare local variables  
    printf (" Enter the number to define the columns: \n");  
    scanf ("%d", & num);  
    for (i = 1; i <= num; i++)  
    {  
        for (j = 1; j <= i; j++)  
        {  
            printf( "%c", 'A' + j -1);  
        }  
        printf("\n");  
    }  
    for (i = num-1; i >= 1; i--)  
    {  
        for (j = 1; j <= i; j++)  
        {  
            printf ("%c", 'A' + j -1);  
        }  
        printf("\n");  
    }  
    getch();  
}  

