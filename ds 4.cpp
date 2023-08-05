#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the size of of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements in array: ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("even numbers: ");
    for (i=0;i<n;i++)
    {
        if (arr[i]%2==0)
        {
            printf("%d ",arr[i]);
        }
    } 
    printf("\nodd numbers: ");
    for (i=0;i<n;i++)
    {
        if (arr[i]%2==1)
        {
            printf("%d ",arr[i]);
        }
    }
}