#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5};
    int key=6,flag=0;
    int low=0,high=4,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==a[mid])
        {
            flag=1;
            break;
        }
        else if(key<a[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    if(flag==1)
    {
        printf("element found ");
    }
    else
    {
        printf("element not found");
    }
    return 0;
}
outpuit
element not found
