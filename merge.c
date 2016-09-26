//Merge Sort

#include <stdio.h>

#define SIZE 8

void mergesort(int a[], int n)
{  
   if(low<high)
        
}
void merge(int a[],int b[],int m,int n)
{   
    int i=0,j=0;
    int c[100];
    while(i<=m-1 && j<=n-1)
    {
        if(a[i]<=a[j])
        {
            c[k]=c[i];
            k++;
            i++;
        }
        else
        {
            c[k]=c[j];
            j++;
            k++;      
        }
    }
    while(i<=m-1)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(i<=n-1)
    {
        c[k]=a[j];
        j++;
        k++;
    }  
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
