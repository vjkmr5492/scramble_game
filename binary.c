#include <cs50.h>
#include <stdio.h>

#define SIZE 8

int search(int needle, int haystack[], int size)
{
    // TODO: return true iff needle is in haystack, using binary search
    int low=0,high=size-1;
    int mid;
    
    while(low<=high)
    {
      mid=(low+high)/2;
      if(needle==haystack[mid])
        return 1;  // element found,so return 1
      else if(needle>haystack[mid])
        low=mid+1;
      else
        high=mid-1;    
    }
    return 0; //key element not found
}

int main(void)
{
    int numbers[SIZE] = { 4, 8, 15, 16, 23, 42, 50, 108 };
    printf("> ");
    int n = GetInt();
    if (search(n, numbers, SIZE))
        printf("YES\n");
    else 
        printf("NO\n");    
    return 0;
}
