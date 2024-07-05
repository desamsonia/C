/* Input1: n=3,str="ID",  Output1:[1,3,2]
 * Input2: n=4,str="IDD", Output2: [ 1,4,2,3]
 * D means the next number is smaller, while I means the next number is greater */

#include<stdio.h>
int main()
{
	int n=4,i,start=1,end=n;
	char str[3] = "IDI";
	int res[4]={0};
        for(i=0;i<4;i++)
	{
		if(str[i] == 'I')
		{
			res[i]=start;
			start++;
		}

		else
		{
			res[i]=end;
			end--;
		}
	}
	i--;
	res[i]=start;
	for(i=0;i<n;i++)
		printf("%d ",res[i]);
	return 0;
}

