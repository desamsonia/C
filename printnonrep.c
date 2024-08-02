/* print non repeated elements in an array
i/p : 8 2 4 8 7 9    o/p: 2 4 7 9 */
#include<stdio.h>
int main()
{
    int arr[6] = { 8, 2, 4, 8, 7, 9};
    int i,j,cnt;
    for(i=0;i<6;i++)
    {
        cnt = 0;
        for(j=0;j<6;j++)
        {
            if(arr[i] == arr[j])
              cnt++;
        }
        if(cnt == 1)
        printf("%d ",arr[i]);
    }
}