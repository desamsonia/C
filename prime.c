#include<stdio.h>

int primecheck(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i == 0)
			return 0;
	}
	return 1;
}

void sort (int arr[], int i,int c)
{
	int j;
        for(i=i;i<c;i++)
        {
                for(j=i+1;j<c;j++)
                {
                        if(arr[i] > arr[j])
                        {
                                int t = arr[i];
                                arr[i] = arr[j];
                                arr[j] = t;
                        }
                }
        }
}


int main()
{
	int i,c=0;
	int arr[8] = {6,4,2,10,13,12,5,11};

	for(i=0;i<8;i++)
	{
		if(primecheck(arr[i]))
		{
			int s  = arr[i];
			c++;
			for(int k=i;k>0;k--)
			{
				arr[k] = arr[k-1];
			}
			arr[0] = s;
		}
	}

	printf("count:%d\n",c);// total prime numbers in an array
	sort(arr,0,c);
	sort(arr,c,8);// here 8 is total size of an array

	for(i=0;i<8;i++)
		printf("%d ",arr[i]);
}
