// Recursive binary search
#include<stdio.h>
int b_search(int a[],int key,int low,int high)
{
  /***********************/
   if(low>high)
    return -1;
  else
  {  
    int mid=(low+high)/2;
    if(key==a[mid])
     return 1;
    else if(key>a[mid])
     b_search(a,key,mid+1,high);
    else
     b_search(a,key,low,mid-1);   
  }    
  /***********************/
  /*if(low>high)
     return -1;
  else
   {
     int mid=(low+high)/2;
     if(a[mid]<key)
      b_search(a,key,mid+1,high);
     else if(a[mid]>key)
      b_search(a,key,low,mid-1);
     else
      return 1; 
   } */
  
}

int main()
{
  int n,key,a[100],i;
  //Take the no of elemnts from user 
  printf("enter the no of elements\n");
  scanf("%d",&n);
  
  //take input elements
  printf("enter the elements\n");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  
  //get the key element from the user  
  printf("enter the key\n");
  scanf("%d",&key); 
  
  //call binary search function
  int res=b_search(a,key,0,n-1);
  if(res==-1)
    printf("not,found!!!\n");
  else
    printf("yes found!!!\n");
  return 0;
}  
