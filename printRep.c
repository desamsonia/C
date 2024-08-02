/* print repeated elements in an array
i/p : 8 2 4 8 7 9    o/p: 8 */
#include<stdio.h>
int main()
{
    int arr[10] = { 2, 2, 2, 3, 4, 5, 2, 5, 6, 2};
    int i,j,cnt,l=0,x=0;
    int t[10];
    for(i=0;i<10;i++)
    {
        cnt = 0;
        for(j=0;j<10;j++)
        {
            if(arr[i] == arr[j])
              cnt++;
        }
        if(cnt > 1)
        {
            cnt = 0;
           for(j=x-1;j>=0;j--)
           {
              if(arr[i] == t[j])
                 cnt++;
           }
           if(cnt==0)
           {
            t[x] = arr[i];
            x++;
           }   
        }

    }
    for(i=0;i<x;i++)
    printf("%d ",t[i]);
}