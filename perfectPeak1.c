#include<stdio.h>

int max(int a,int b)
{
	if(a>b)  return a;
	else return b;
}

int min(int a,int b)
{
	if(a>b)    return b;
	else      return a;
}

int main()
{
	int arr[9] = {5,1,4,3,6,8,10,7,9};
	int pref[8];
	int suff[8];
	pref[0] = arr[0];
        suff[8] = arr[8];
	int i,j;
	
	for(i=1;i<9-1;i++)
		pref[i] = max(pref[i-1],arr[i]);

//	printf("\n");

        for(i=0;i<8;i++)
		printf("%d ",pref[i]);

        printf("\n");

	for(i=9-2;i>=0;i--)
		suff[i] = min(suff[i+1],arr[i]);

	for(i=0;i<9;i++)
		printf("%d ",suff[i]);

	printf("\n");

	 for( i=1;i<(9-1);i++)
	 {
           if(pref[i-1] < arr[i] && suff[i+1] > arr[i] && arr[i] != suff[i+1]) 
	    printf("%d",1);
         }
     return 0;
}
