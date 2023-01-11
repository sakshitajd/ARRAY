#include<stdio.h>
int main()
{
   int n,arr[50];
   printf("enter the no. of elements :");
   scanf("%d",&n);
   printf("enter the elements :");
   for(int i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }
   int x;
   x=sizeof(arr)/sizeof(int);
   for(int i=0;i<=n-1;i++)
   {
   printf("%d ",arr[i]);
   }
   return 0;
}