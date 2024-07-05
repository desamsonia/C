/*solution -> 1, refer (triplets1.c) in current folder for another approach */

/* Given [0.6, 0.7, 0.8, 1.2, 0.4],
 * return 1, if as 0.6+0.7+0.4=1.7,  1<1.7<2,  Hence, the output is 1.
 * else return 0
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char *a[5] = {"0.6","0.7","0.4","1.2","0.4"};
	float arr[5];
	int i,j;
	for(i=0;i<5;i++)
	{
		arr[i] = atof(a[i]);
	}

	/*for(i=0;i<5;i++)
		printf("%0.1f ",arr[i]);*/

         float r=0.0,f=0;
	 i=0,j=5-1;
	while(abs(i-j)>=2)
	{
		r=0;
		r=arr[i]+arr[i+1]+arr[j];
		if(r>=2)
			j--;
		else if(r<1)
			i++;
		else{

			f=1;
			break;
		}
	}
	if(f==1) printf("%d",1);
	else printf("%d",0);

	return 0;
}

