#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int primeCheck(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
	   if(n%i == 0)   return 0;
	}

	return 1;
}

void revarr(int arr[],int l)
{
	int i=0,t,n;
	n=l;
	l=l-1;
	printf("l= %d\n",l);
	while(i<=l)
         {
		t=arr[i];
		arr[i] = arr[l];
		arr[l] = t;
		i++;
		l--;
	}
}


void cirPrime(int data)
{
	int arr[8];
	int i=0,r,n=0;
        int t = data;

	while(t)
	{
		r=t%10;
		arr[i++] = r;
	        t/=10;
	}
         
	int l =i;
	revarr(arr,i);
	   r=l;
            while(r>0)
	    {
		n=0;    
		int s = arr[0];
	        for(int j = 0;j<l;j++)
                {
			arr[j] = arr[j+1];
                }
		arr[l-1] = s;
                	
		for(int j = 0;j<l;j++)
		{
		   n=n*10+arr[j];
		}

	        if(primeCheck(n))
			printf("Yes:%d\n",n);
		r--;
	    }
}


int main()
{
	int data;
	printf("Enter data:");
	scanf("%d",&data);
        if(primeCheck(data))
        	cirPrime(data);
}
