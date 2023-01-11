#include<stdio.h>
int main()
{
    int n,arr[30];
    printf("enter the no. of elements :");
    scanf("%d",&n);
    printf("enter the elements :\n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    int max,min;
    max=arr[0];
    for(int i=1;i<n;i++)
    if(arr[i]>max)
    max=arr[i];
    printf("\nmaximum number is %d\n",max);
   
    min=arr[0];
    for(int i=1;i<n;i++)
    if(arr[i]<min)
    min=arr[i];
    printf("minimum number is %d",min);
    return 0;
}
