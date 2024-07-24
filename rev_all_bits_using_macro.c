#include<stdio.h>
#define rev_Left(n,l,r) ((n >> l) &1) != ((n >> r)&1)
#define rev_Right(n,l,r)  n ^= (1<<l); n^=(1<<r);
int main()
{
    int data;
    int l,r,i;
    scanf("%d",&data);
    for(l=31,r=0;l>r;l--,r++)
    {
        if(rev_Left(data,l,r))
        {
            rev_Right(data,l,r)
        }
    }
    for(i=31;i>=0;i--)
    printf("%d ",(data>>i)&1);
    printf("%d\n",data);
    return 0;
}
