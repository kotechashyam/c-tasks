#include<stdio.h>

void abc()
{
    int a,b=1,i;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("-------------------Odd Even--------------------\n");
    if(a%2==0)
    {
        printf("Number is even\n");
    }
    else 
    {
        printf("Number is odd\n");
    }
    printf("-------------------------------Factorial-------------------------");
    for(i=1;i<=a;i++)
    {
        b=i*b;
    }
    printf("\nFactorial of %d is %d ",a,b);
}
int main()
{
    abc();
    return 0;
}