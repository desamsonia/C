#include<stdio.h>

int main()
{
	int arr[6] = {900,1100,1235};
	int dep[6] = {1000,1200,1240};

	int cnt = 1,max = 1,i=1,j=0;

	while(i<3 && j<3)
	{
		if(arr[i] <= dep[j])
		{
			i++;
			cnt++;
			if(cnt>max)
				max = cnt;
		}
		else
		{
			j++;
			cnt--;
		}
	}
	printf("max = %d\n",max);
	return 0;
}
