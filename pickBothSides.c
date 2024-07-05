#include<stdio.h>
#include<limits.h>

int max(int a,int b)
{
	if(a>b)  return a;
	else return b;
}


int main()
{
/*  i/p1 */	int arr[5] = {5,-2,3,1,2};
/*  i/p2 */     int B=3;
	        int csum=0,i;
		for(i=0;i<B;i++)
			csum += arr[i];

		//printf("%d ",csum);

		int x = B,temp,ans = INT_MIN;
		while(x>0)
		{
			temp=csum - arr[x-1] + arr[5-(B-x+1)];
			printf("temp = %d\n",temp);
			ans=max(temp,ans);
			printf("ans = %d\n",ans);
			csum=temp;
			printf("csum = %d\n",csum);
			x--;
		}
		printf("final ans = %d",ans);
		return 0;
}
