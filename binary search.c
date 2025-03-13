#include<stdio.h>
void main()
{
    int a[100],n,i,key;
    int low,mid,high;
    printf("enter the size of array :");
    scanf("%d",&n);
    printf("enter the elements into array:");
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    printf("enter the the key :");
    scanf("%d",&key);
    low=1,high=n;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key ==a[mid])
        {
            printf("element found");
            break;
            }
        else if(key<a[mid])
            high=mid-1;
        else if(key>a[mid])
        low=mid+1;
    }
    if(low>high)
        printf("element not found");
}
