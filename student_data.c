//sakshita jagtap
//2021BIT039
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,j;
    char name[100];
    int roll,CGPA;
    char branch[100];

    printf("enter no. of students: ");
    scanf("%d",&n);

    for(j=0;j<n;j++)
    {
        printf("\nenter name of student: ");
        scanf("%s",&name);
        printf("enter branch of studemt: ");
        scanf("%s",&branch);
        printf("enter roll no. of student: ");
        scanf("%d",&roll);
        printf("CGPA of student: ");
        scanf("%d",&CGPA);
    }
    printf("\ndata of student: \n");
    for(j=0;j<n;j++)
    {
        printf("name of student : %s\n",name);
        printf("roll no. of student : %d\n",roll);
        printf("branch of student : %s\n",branch);
        printf("CGPA of student : %d\n",CGPA);
    }
    return 0;
}