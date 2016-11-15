#If given array is in sorted order
#include <stdio.h>
int main()
{
    int A[8]={4,6,8,10,12,14,16,18};
    int l,r,i;
    int x=16;
    l=0;
    r=7;
    while(l<r)
    {
        if(A[l]+A[r]==x)
        {
        printf("%d  %d\n",A[l],A[r]);
        l++;
        r--;
        }
        else if((A[l]+A[r])<x)
        r--;
        else 
        l++;
    }
    return 0;
}

