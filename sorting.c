#include <stdio.h>

#define SIZE 8

void sort(int a[], int n)
{  
   /**************************************************************************************
   
    // Bubble sort
    
    for(int i=1;i<n;i++) //for n elements,we need n-1 passes
    {
      for(int j=0;j<n-i;j++) // for ith pass,we make n-i comparisions OR go untill last but i elements 
      {
        if(a[j]>a[j+1])
        {
          int temp;
          temp=a[j];
          a[j]=a[j+1];
          a[j+1]=temp;
        }
      }
    }  
    
    ****************************************************************************************/
    
    /****************************************************************************************
    
    //Selection Sort
    
    for(int i=0;i<=n-1;i++) //for all elements in the list
    {
       int min=i;
       for(int j=i;j<=n-1;j++)  //find the index of minimum element
       {
           if(a[j]<a[min])
             min=j;
       }

       int temp;
       temp=a[i];     //swap a[i] with a[min]
       a[i]=a[min];
       a[min]=temp;  
    }
    
    
    ********************************************************************************************/
}

int main(void)
{
    int numbers[SIZE] = { 4, 15, 16, 50, 8, 23, 42, 2 };
    for (int i = 0; i < SIZE; i++)
        printf("%d ", numbers[i]);
    printf("\n");
    sort(numbers, SIZE);
    for (int i = 0; i < SIZE; i++)
        printf("%d ", numbers[i]);
    printf("\n");
    return 0;
}
