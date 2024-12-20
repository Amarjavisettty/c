#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5};
    int i,key=5,flag=0;
    for(i=0;i<5;i++)
    {
        if(key==a[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("key is found");
else
printf("key is not fround");
return 0;
}
output
key is found
