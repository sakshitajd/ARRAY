//sakshita jagtap
//2021BIT039
#include<stdio.h>
int main()
{
    int arr[20],dup[20],k=0,n;
    printf("enter the size of an array: ");
    scanf("%d",&n);
    printf("enter the elements : ");
     for(int i=0;i<n;i++)
     {
        scanf("%d",&arr[i]);
     }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                (dup[k]=arr[j]);
                k++;
            }
        }
    }
    for(int i=0;i<k;i++)
    {
        printf("duplicate element is : %d\n",dup[i]);
    }
    printf("no. of duplicate element is: %d\n",k);
    return 0;

}