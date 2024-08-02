#include<stdio.h>
int main()
{
    int arr[5] = {1,4,0,7,7};
    int i,j,cnt,mc=0,me;
    for(i=0;i<5;i++)
    {
        cnt = 0;
        for(j=0;j<5;j++)
        {
            if(arr[i] == arr[j])
                   cnt++;
        }
        if(cnt > mc)
        {
            mc = cnt;
            me = arr[i];
            //printf("%d ",arr[i]);
        }
    }
    printf("%d ",me);

}