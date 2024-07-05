//Not working for balanced array, instead refer balArr.c



#include<stdio.h>
#include<string.h>

int main()
{
	int arr[4] = {2,1,6,4};
	int temp[4];

	for(int l=0;l<4;l++)
		temp[l] = arr[l];

	for(int l=0;l<4;l++)
		printf("%d ",temp[l]);
	printf("\n");

	int *p;
	p=arr;

	int i,j,e,o,cnt=0;
	for(i=0;i<4;i++)
	{
		e=0,o=0;
		memmove(p+i,p+i+1,sizeof(p)+1);

		//for(int k=0;k<4;k++)
		//	printf("%d ",temp[k]);
		printf("\n");
                for(j=0;j<4;j++)
		{
			if(j%2 == 0)
			{
				e=e+p[j];
			}
			else
			{
				o=o+p[j];
			}
		}
		if(o==e)
			cnt++;
		p=temp;
	for(int k=0;k<3;k++)
                        printf("_%d ",temp[k]);
                printf("\n");

	}
}
