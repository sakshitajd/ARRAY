#include<stdio.h>
int main()
{
    int n,arr[20],r;
    int i;
    printf("enter the no. of elemrnts :");
    scanf("%d",&n);
    printf("enter the  elements :");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("enter the element to be search :");
    scanf("%d",&r);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==r)
        {
            printf("%d is present at %d loction",r,i+1);
            break;
        }
    }
}