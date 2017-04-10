#include<stdio.h>
int bsearch(int a[],int item,int low,int high)
{
    int mid;
    mid=(low+high)/2;
    if(low<=high)
    {
        if(item==a[mid])
            return mid;
        else if(item<a[mid])
            bsearch(a,item,low,mid-1);//searh in the left part of the array
        else
            bsearch(a,item,mid+1,high);//search in th right part of the array
    }
    else
        return -1;
}
main()
{
    int a[50],n,item,i,low,high,res;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    low=0;
    high=n-1;
    printf("Enter item\n");
    scanf("%d",&item);
    res=bsearch(a,item,low,high);
    if(res!=-1)
        printf("\nThe item is found in index %d and position %d\n",res,res+1);
    else
        printf("Item not found");
}
