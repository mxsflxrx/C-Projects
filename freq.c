#include<stdio.h>

void get_frequency(int n);

void main(){

    int n;
    
    printf("Input elements to be stored: ");
    scanf("%d", &n);

    get_frequency(n);

}

void get_frequency(int n){

    int array[n], array2[n];

    for(int x=0; x<n; x++){
        printf("Enter Element # %d: ", x+1);
        scanf("%d", &array[x]);
    }

    for(int x=0; x<n; x++)
    {
        for(int y=x+1; y<n; y++)
        {
            if(array[y] <array[x])
            {
                int tmp = array[x];
                array[x] = array[y];
                array[y] = tmp;
            }
        }
    }
    printf("UNIQUE:   ");
    for(int x=0; x<n; x++)
    {
        printf("%5d", array[x]);
    }
	        printf("\n\n");

    for(int x=0; x<n; x++)
    {
        int ctr=0;
        for(int y=0,k=n; y<k+1; y++)
        {
            /*Increment the counter when the seaarch value is duplicate.*/
            if (x!=y)
            {
		       if(array[x]==array[y])
              {
                 ctr++;
               }
             }
        }
       if(ctr==0)
        {
          printf("%d ",array[x]);
        }
    }
       printf("\n\n");
}