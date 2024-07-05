#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *itoa(int num)
{
	int cnt=0;
	char *p=NULL;
	while(num)
	{
		p=realloc(p,cnt+1);
		p[cnt++]=num%10;
		num/=10;
	}
	p[cnt]=0;

	int i=0,j=strlen(p)-1;
	for( i=0,j;i<j;i++,j--)
	{
		char temp=p[i];
		p[i]=p[j];
		p[j]=temp;
	}
	return p;
}
void find_large(int *a,int s)
{
	for(int i=1;i<5;i++)
	{
		for(int j=0;j<4;j++)
			{
				if((strcmp(itoa(a[j]),itoa(a[j+1])))<0)
				{
					int b=a[j];
					a[j]=a[j+1];
					a[j+1]=b;
				}
			}
	}

	 for(int i=0;i<5;i++)
        {
                printf("%d ",a[i]);
        }
}

int main()
{
	int arr[]={3,34,30,9,5};
	for(int i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	find_large(arr,5);
}
