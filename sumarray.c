/*i/p: 1 4 0 3 and sum = 7 
  o/P: [1,3]
  Explanation: Sub-array with given sum */

#include<stdio.h>
int main()
{
    int arr[4] = {1,4,0,3};
    int s = 7;
    int i,j,cs=0;
    for(i=0;i<4;i++)
    {    cs=0;
         //printf("outer_loop i = %d\n",i);
        for(j=i;j<4;j++)
        {
            //printf("inner_loop j = %d\n",j);
            cs+=arr[j];
        if(s==cs)
        {
          printf("sum found between [%d , %d]\n",i,j);
          return 0;
        }
        }
       
    }
    printf("no subarray found\n");
}