/* Pairs in Array with given Sum 
i/p: 5,2,3,4,1,6,7 and sum 7
o/p: (5,2) (3,4) (1,6)*/
#include<stdio.h>
int main()
{
    int arr[7] = {5,2,3,4,1,6,7};
    int i,j,sum=9,f=0;
    for(i=0;i<7;i++)
    {
        for(j=i+1;j<7;j++)
        {
            if(arr[i] + arr[j] == sum)
            {
                f=1;
                printf("pair is (%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    if(f==0)
    printf("no pair found\n");

}