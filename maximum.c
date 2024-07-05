/* Given an array A of integers, find the maximum of j - i subjected to the constraint of A[i] <= A[j].
 * Input: A = [3, 5, 4, 2], Outpt: 2      -------> 2-0 and 3<=4 
 */

#include<stdio.h>

int main()
{
  int arr[5] = {2,3,7,1,1};
  int i,j,a=0,p=0;
  for(i=0;i<5;i++)
  {
	  for(j=0;j<5;j++)
	  {
		  a=j-i;
		//  printf("a=%d\n",a);
		  if(a > p)
		  {
			  if(arr[i]<=arr[j])
				  p=a;
		  }
	  }
  }
  printf(" p = %d\n",p);
  return 0;
}
