#include<stdio.h>

int solve(int *A, int n1, int B)
{
  int left_sum[B + 1], right_sum[B + 1], max, i;
  left_sum[0] = right_sum[0] = 0;

  for (i = 1; i < B + 1; ++i)
  {
    left_sum[i] = left_sum[i - 1] + A[i - 1];
    printf("left sum = %d\n",left_sum[i]);

    right_sum[i] = right_sum[i - 1] + A[n1 - i];
    printf("right sum = %d\n",right_sum[i]);
  }

  max = left_sum[0] + right_sum[B];
printf("max = %d\n",max);

  for (i = 0; i < B + 1; ++i)
  {

	 printf("sum=%d\n",left_sum[i]+right_sum[B-i]); 
    if (left_sum[i] + right_sum[B - i] > max)
    {

      max = left_sum[i] + right_sum[B - i];

    }

  }
  return max;
}



int main()
{
	int arr[5] = {5,-2,3,1,2};
	int ret = solve(arr,5,3);
	printf("ret=%d\n",ret);
	return 0;
}
