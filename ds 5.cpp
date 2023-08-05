#include <stdio.h>
int fact(int);
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("The factorial of %d=%d",a,fact(a));
    return 0;
}
int fact(int x)
{
    int f;
    if(x==1)
    return 1;
    else
    f=x*fact(x-1);
return f;
}