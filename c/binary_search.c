#include<stdio.h>
int main(void)
{
    int nums[6]={1,2,3,4,5,6};
    int st= 1;
    int end= 5;
    int tar;
    scanf("%d", &tar);
    while(st<=end)
    {
        int mid = st+end/2;
        if(tar< nums[mid])
        {
            end=mid-1;
        }
        else if(tar>nums[mid])
        {
            st=mid+1;
        }
        else
        {
            printf("found at  :- %i" , mid);
            return mid;
        }
    }
    return 0;
}