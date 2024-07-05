#include<stdio.h>

int main()
{
	int N,S,start=0,sum=0,flag=0;
	int arr[100];
	printf("Ente size of an array:");
	scanf("%d",&N);

	printf("Enter sum:");
	scanf("%d",&S);

	int i,j;
	for(i=0;i<N;i++)
		scanf("%d",&arr[i]);

        for(i=0;i<N;i++)
	{
		sum = sum + arr[i];
		while(sum > S)
		{
			sum = sum - arr[start];
			start++;
		}

		if(sum == S)
		{
			printf("start = %d and i=%d\n",start+1,i+1);
			flag = 1;
			break;
		}
	}

	if(flag == 0)
		printf("-1");
	return 0;
}
