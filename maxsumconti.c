/* Input: [2, 1, 5, 1, 3, 2], k=3 
Output: 9
Explanation: Subarray with maximum sum is [5, 1, 3]. */
#include<stdio.h>
int main()
{
    int arr[5] = {2, 3, 4, 1, 5};
    int k = 2,n=0;
    int i,j,sum,max=0;
    for(i=0;i<6;i++)
    { 
         if(i==5)
           break;
         sum=0;
        for(j=i;j<k+i;j++)
        {
          sum=sum+arr[j];
          printf("%d \n",sum);
        }
        printf("Sum = %d\n",sum);
        if(sum > max)
           max = sum;
       
    }
    printf("%d\n",max);
    return 0;
}