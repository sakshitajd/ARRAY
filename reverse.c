//sakshita jagtap
//2021BIT039
#include<stdio.h>
int main()
{
    int n, i,arr[100];
    printf("enter the no. of element in an array : ");
    scanf("%d",&n);
    printf("enter the element : ");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    printf("reverse array is: ");
    for(i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
return 0;

}