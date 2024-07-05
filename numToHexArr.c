#include<stdio.h>
#include<string.h>

void rev(char *str)
{
	printf("str = %s\n",str);
	int i,j;
	char temp;
	for(i=0,j=strlen(str)-1;i<=j;i++,j--)
	{
		     temp=str[i];
		     str[i]=str[j];
		     str[j]=temp;
	}
}

int main()
{
	int arr[5] = {45,58,67,77,82};
	char str[5][4];
	int i,j,n,r;
        int k=0;
	for(i=0;i<5;i++)
	{
		n=arr[i];
		r=0;
		j=0;
		while(n != 0)
		{
		   r = n%16;
	           if(r<10) r=r+48;
	           else     r=r+55;
	                str[k][j++] = r;
                    n=n/16;
		}
		k++;
	}
        
  for(i=0;i<5;i++)
  {
     rev(str[i]);
  }

for(i=0;i<5;i++)
         printf("%s ",str[i]);
	return 0;
}
