#include<stdio.h>
void main()
{
    int n,p,rev,r;
    printf("enter the number :");
    scanf("%d",&n);
    p=n;
    while(n>0)
    {
        r=n%10;
       rev=rev*10+r;
        n=n/10;
    }
    printf("the reverse of number  is %d",rev);
    if(p==rev)
        printf("\ntherefore it is a palindrome numuber ");
    else
        printf("\ntherefore it is not palindrome number ");
}
