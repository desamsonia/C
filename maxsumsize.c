/* Size of sub-array with max sum */
/* i/p: -7, 3, 4, -1, -12, 1, -9, -3        // 3+4
   o/p: 2 */
#include<stdio.h>
int main()
{
    int arr[5] = {-1,4,-1,3};
    int i,j,sum = 0, cs =0,size;
    for(i=0;i<5;i++)
    {
        cs = 0;
        for(j=i;j<5;j++)
        {
             cs+=arr[j];
             //printf("cs = %d\n",cs);
             if(cs > sum)
             {
                sum = cs;
                size = j;
             }
        }
    }
    printf("sum %d\n",sum);
    printf("size of sub array is  = %d\n",size);
    return 0;
}