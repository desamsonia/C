/* return 1,if found element(suppose p),it's left side elements smaller than p and right side elements greater than p then return 0*/


#include<stdio.h>

int check(int *arr,int n,int b)
{
      int i,j;
      for(i=0,j=n-1;j>i;i++,j--)
      {
	      if(!(arr[i]<b && arr[j]>b))
	      {
		      return 0;
	      }
      }

      return 1;
}

int main()
{
	int arr[9]={5,1,4,3,6,8,10,7,9};
	int i,ret;
	for(i=0;i<9;i++)
	{
	ret=check(arr,9,arr[i]);
//	printf("%d\n",ret);
	if(ret==1)
	   break;
	}
	printf("%d",ret);
	return 0;
}
		

