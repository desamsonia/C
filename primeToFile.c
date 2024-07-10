#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int cnt=0;
int isPrime(int n)
{
	int i;
//	if(n==1) return 0;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
int *primeArr(int min,int max)
{
	int *p=NULL;
	while(min <= max)
	{
		if(isPrime(min))
		{ 
			p=realloc(p,(cnt+1)*sizeof(int));
	         	p[cnt]=min;
			cnt++;
		}
		min++;
	}
	for(int i=0;i<cnt;i++)
		printf("%d\n",p[i]);
	return p;
}


int main(int argc,char *argv[])
{
   int min,max;
   int *arr=NULL;
   printf("Enter range:\n");
   printf("Enter min:");
   scanf("%d",&min);
   printf("Enter max:");
   scanf("%d",&max);
   arr = primeArr(min,max);
   FILE *fp;
   //fp=fopen("fwrite.txt","w");
   fp=fopen("pri.txt","w");
   int i;
   for(i=0;i<cnt;i++)
   {
	   fprintf(fp,"%d ",arr[i]);
   }
   fwrite(arr,sizeof(arr),1,fp);
   fclose(fp);
}
