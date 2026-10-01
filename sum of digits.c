#include<stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    printf("sum of %d",a=a/100+a/10%10+a%10);

    return 0;
}