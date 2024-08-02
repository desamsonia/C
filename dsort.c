#include<stdio.h>
int main()
{
    int arr[4][4] = {{4,3,2,1},{2,6,4,4},{1,1,9,8},{6,2,3,0}};
    int i,j,k,t;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            for(k=0;k<4;k++)
            {
                if(arr[i][j] > arr[k][j])
                {
                    t=arr[k][j];
                    arr[k][j]=arr[i][j];
                    arr[i][j]=t;
                }
            }

        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}