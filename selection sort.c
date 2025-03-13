#include<stdio.h>
void main()
{
    int size,i,j,temp,list[100];
    printf("enter the size of list :");
    scanf("%d",&size);
    printf("enter the elements:");
    for(i=0;i<size;i++)
        scanf("%d",&list[i]);
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(list[i]>list[j])
            {
                temp=list[i];
                list[i]=list[j];
                list[j]=temp;
            }
        }
    }
    printf("after sorting elements are :");
    for(i=0;i<size;i++)
        printf(" %d ",list[i]);
}
