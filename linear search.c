#include<stdio.h>
void main()
{
    int a[100],n,i,key;
    printf("\n enter size of array :");
    scanf("%d",&n);
    printf("enter the elements into array:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter the key element");
    scanf("%d",&key);
    for(i=1;i<n;i++)
        if(key==a[i])
    {
        printf("element found");
    }
    if(key!=a[i])
        printf("element not found \n");
}
