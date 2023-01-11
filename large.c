#include<stdio.h>
int main()
{
    int i,n;
    int arr[100], min[100];
    printf("enter total no. of elements : ");
    scanf("%d",&n);
    
    printf("enter numbers : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        arr[i+1]=arr[i];
    }
    printf("largest element = %d",arr[i]);
    return 0;
}