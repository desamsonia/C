/* program to form larger number by an array elements
 * arr[5] = [3,30,34,5,9] and output: 9534303
 */

#include <stdio.h>
int countDig(int n)
{
	int c=0,r;
	while(n)
	{
          r=n%10;
	  c++;
	  n/=10;
	}
	return c;
}
int product(int a,int b)
{
   int n=0,c1=0,c2=0;	
   c1=countDig(a);
   c2=countDig(b);
   if(countDig(a)==1)
   {
      n=n*10+a;
   }

   if(countDig(a)==2)
   {
	n=n*100+a;
   }

   if(countDig(b)==1)
   {
	   n=n*10+b;
   }

   if(countDig(b)==2)
   {
	   n=n*100+b;
   }
 return n;
}

int largeNum(int arr[])
{
	int n=0,i,c;
	for(i=0;i<5;i++)
         {
            if(countDig(arr[i])==1)
		n=n*10+arr[i];
	    if(countDig(arr[i])==2)
		n=n*100+arr[i];
	 }
	return n;
}

int main()
{
	int arr[] = {3,30,34,5,9};
	int i,j,a,b;
	for(i=0;i<5;i++)
	{ 
		for(j=i+1;j<5;j++)
		{
		      a=product(arr[i],arr[j]);
		      b=product(arr[j],arr[i]);
		      printf("a=%d and b=%d\n",a,b);
		      if(b>a)
		      {
                         int temp=0;
			 temp=arr[i];
			 arr[i]=arr[j];
			 arr[j]=temp;
		      }
		}

	}
	for(i=0;i<5;i++)
		printf("%d ",arr[i]);
       int n = largeNum(arr);     
       printf("n=%d\n",n);
}
