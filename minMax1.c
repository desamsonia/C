#include<stdio.h>

int min(int a,int b)
{
	if(a<b) return a;
	else return b;
}

int max(int a,int b)
{
	if(a>b) return a;
	else return b;
}

int main()
{
	int arr[4] = {1,3,4,1};
	int mini;
	mini=arr[0];
	int maxi;
	maxi=arr[0];

	for(int i=0;i<4;i++)
	{
		mini=min(mini,arr[i]);
		maxi=max(maxi,arr[i]);
	}

	printf("%d ",mini+maxi);
	return 0;
}
