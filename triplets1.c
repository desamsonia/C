/* Another solution */

/* Given [0.6, 0.7, 0.8, 1.2, 0.4],
 * return 1, if as 0.6+0.7+0.4=1.7,  1<1.7<2,  Hence, the output is 1.
 * else return 0
*/



#include<stdio.h>
#include<stdlib.h>

int triplets(double *arr,int n)
{
	int i;
	double a=arr[0],b=arr[1],c=arr[2];
	for(i=3;i<=n-1;i++)
	{
		if(a+b+c > 1 && a+b+c < 2)
			return 1;

		else if(a+b+c > 2)
		{
			if(a>b && a>c) a=arr[i];
			else if(b>a && b>c) b=arr[i];
			else if(c>a && c>b) c=arr[i];
		}

		else if(a+b+c < 1)
		{
			if(a<b && a<c) a=arr[i];
			else if(b<a && b<c) b=arr[i];
			else if(c<a && c<b) c=arr[i];
		}
	}
	if(a+b+c > 1 && a+b+c < 2 )
		return 1;
	else return 0;
}


int main()
{
        char *a[5] = {"0.6","0.7","0.8","1.2","0.4"};
        double arr[5];
        int i,j;
        for(i=0;i<5;i++)
        {
                arr[i] = atof(a[i]);
        }

        for(i=0;i<5;i++)
                printf("%0.1f ",arr[i]);
        int n;
        n=triplets(arr,5);
        printf("%d",n);
        return 0;
}	
