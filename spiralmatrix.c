/* 1 2 3 4
   5 6 7 8
   9 10 11 12
   13 14 15 16
   */
#include<stdio.h>

void spiral(int m, int n, int (*a)[4])
{
    int i,k=0,l=0;
    m=3,n=3;
    while(k <= m && l <= n)
    {
        /// row left to right
        for(i = l; i <= n; i++)
        {
            printf("%d ", a[k][i]);
        } 
        // column top to bottom
        k++;
        for(i = k; i <= m; i++)
        {
            printf("%d ", a[i][n]);
        }
      n--;
        // row right to left
        if(k <=m )
        {
            for(i = n; i >= l; --i)
            {
                printf("%d ", a[m][i]);
            }
            m--;
        }
        // column bottom to top
        for(i = m; i >= k; --i)
        {
            printf("%d ", a[i][l]);
        }
       l++;
    }
}


int main()
{
    int arr[4][4] = {{1, 2, 3, 4,},{5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    spiral(4, 4, arr);
}