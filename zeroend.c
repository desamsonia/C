#include<stdio.h>
#include<string.h>
int main()
{
    int arr[9] = {1,3,0,8,12,0,4,0,7};
    int i,k=0,l=0;
    int t1[3],t2[6];
    for(i=0;i<9;i++)
    {
        if(arr[i] == 0 )
        {
            t1[k++] = arr[i];
        }
        else{
            t2[l++] = arr[i];
        }
    }
    memmove(t2+l,t1,l*sizeof(int));
    for(i=0;i<9;i++)
    printf("%d ",t2[i]);
}