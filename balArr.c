/* Input 1: A = [2, 1, 6, 4]  Output 1:1
 * After deleting 1 from array : {2,6,4}
    (2+4) = (6)
 Hence 1 is the only special element, so count is 1
 */

#include<stdio.h>
int main()
{
	int arr[4]={2,1,6,4};
	int even=0,odd=0,i,cnt=0;
	for(i=0;i<4;i++)
	{
		if(i%2 == 0) even+=arr[i];
		else odd += arr[i];
	}

	int evenLeft=0;
	int oddLeft=0;

	for(i=0;i<4;i++)
	{
		if(i%2 == 0)
		{
			if(evenLeft+odd == even-arr[i]+oddLeft)
				cnt++;
			evenLeft+=arr[i];
			even -= arr[i];
		}

		else
		{
			if(oddLeft+even == odd - arr[i]+evenLeft)
				cnt++;
			oddLeft  += arr[i];
			odd -= arr[i];
		}
	}
	printf("%d ",cnt);
	return 0;
}
