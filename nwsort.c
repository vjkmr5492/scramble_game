//Insertion sort
#include <stdio.h>

#define SIZE 8

void sort(int a[], int n)
{  
   for(int i=1;i<=n-1;i++)
     {
        int j=i;  
        int element=a[i];  // store the element value that is movin from unsorted list to sorted list
        while(j>0&&element<a[j-1])
        {
          a[j]=a[j-1];
          j--;
        }
        a[j]=element;
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
