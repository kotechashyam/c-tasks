#include<stdio.h>

void pyramid(int a)
{
    int i,j;
    for(i=a;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
int main()
{
    int rows;

    printf("Enter No of rows:");
    scanf("%d",&rows);
    pyramid(rows);
    return 0;
}