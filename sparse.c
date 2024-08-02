#include<stdio.h>
int main()
{
    int arr[4][4] = {{1,0,0,2},{0,0,2,3},{3,0,4,0},{5,0,0,0}};
    int s[4][4];
    int i,j,t,k=0;
    for(i=0;i<4;i++)
    {  
        for(j=0;j<4;j++)
        {
            if(arr[i][j] != 0)
            {
               s[k][0] = i;
               s[k][1] = j;
               s[k][2] =arr[i][j];
               k++;
            }

        }
    }
    printf("k=%d\n",k);
    for(i=0;i<k;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",s[i][j]);
        }
        printf("\n");
    }
}