//Max diference between successive array elements



#include<stdio.h>

int main()
{
  int arr[3]={1,5,11};
  int i,j,d=0,p;
  for(i=0;i<3;i++)
  { 
	  d=0;
	  d=arr[i]-arr[i+1];
	  d=-d;
	  if(d > p)
	   p=d;
  }
	      
  printf("%d ",p);


}
