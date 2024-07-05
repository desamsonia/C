/* i/p1: [1,3,2,4,5]
 * o/p1: [1,2]
 * i/p2: [1,2,3,4,5]
 * o/p2: -1 ->becoz already sorted
 * i/p3: [1,1,2,3,1,6]
 * o/p3: [2,4]
 */

#include<stdio.h>
#include<limits.h>

int min(int a,int b)
{
	if(a>b)	return b;
	else    return a;
}

int max(int a,int b)
{
	if(a>b) return a;
	else    return b;
}

int main()
{
  int arr[6] = {1,1,2,3,1,6};
  int i,l=-1,r=-1,n=6;
  for(i=0;i<n-1;i++)
  {
	  if(arr[i] > arr[i+1])
	  {
		  l=i;
		  break;
	  }
  }

  for(i=n-1;i>0;i--)
  {
	  if(arr[i] < arr[i-1])
	  {
		  r=i;
		  break;
	  }
  }
  
  printf("befor-> [%d,%d]",l,r);//3,4

// 1,1,2,3,1,6
  int min_l=INT_MAX,max_r=INT_MIN;
  for(i=l;i<=r;i++)
  {
	  min_l=min(min_l,arr[i]);//3//1
	  printf("min_l = %d\n",min_l);//3//1
	  max_r=max(max_r,arr[i]);//3//3
	  printf("max_r = %d\n",max_r);//3//3
  }

  for (i=0;i<=l;i++)
  {
	  if(arr[i]>min_l)
		  l=i;
  }

  for(i=r;i<n;i++)
  {
	  if(arr[i]<max_r)
		  r=i;
  }

  if(l==-1)
	  printf("%d",-1);
  else
      printf("[%d,%d]",l,r);
  return 0;
}

