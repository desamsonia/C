/* program to add 1 to given array at last
 * i/p: [1,2,3], o/p: [1,2,4]
 * suppose if index 0 has value 0,then should remove 0
 * i/p: [0,1,2,3], o/p: [1,2,3]
 * i.p: [2,5,6,8], o/p: [2,5,6,9]
 */

#include<stdio.h>
#include<string.h>

int main()
{
	int arr[4] = {1,2,5,1};
	int l=4;
	int i;
	int *p=NULL;
	p=arr;
	if(p[0] != 0)
	{

	for(i=0;i<4;i++)
	{
		if(i==l-1)
		{
			p[i] = p[i]+1;
		}
	}

	for(i=0;i<4;i++)
                printf("%d ",arr[i]);
        }


	if(p[0]==0)
	{

	for(i=0;i<4;i++)
	{
		if(p[i]==0)
			memmove(p+0,p+0+1,sizeof(arr));
		break;
	} 
	for(i=0;i<3;i++)
		printf("%d ",arr[i]);
	}
	return 0;
}
