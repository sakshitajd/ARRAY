// sakshita jagtap
// 2021BIT039
#include <stdio.h>
int main()
{
  int arr[100], n, r, i;
  printf("enter the no of elements in array : ");
  scanf("%d", &n);
  printf("enter the elements : ");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("enter the no. to be  : ");
  scanf("%d", &r);
  i = 0;
  while (i < n && r != arr[i])
  {
    i++;
  }
  if (i < n)
  {
    printf("element is found in the position=%d", i + 1);
  }
  else
  {
    printf("element not found");
  }
  return 0;
}