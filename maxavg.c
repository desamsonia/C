/* Maximum Average Sub-array of K length */
/* by finding sum of array we can conclude */
#include<stdio.h>
int main()
{
    int arr[6] = { -1, 10, -15, -6, 50, 3 };
    int len = 6;
    int i,j,k=4,index ;
    int sum=0,max=0;
    for(i=0;i<6;i++)
    {
        sum = 0;
        for(j=i;j<k;j++)
        {
            sum+=arr[j];
        }
       // printf("sum = %d\n",sum);
        if(sum > max)
        {
            max = sum;
            //printf("%d \n",i);
            index = i;

        }
         if(k == len)
           break;
        k++;
    }
    printf("max = %d\n",max);
    printf("index = %d\n",index);
    return 0;
}