/* Input 1:
 A = [1, 3, 5]
 B = [2, 6, 8]
 C = 1

Output 1: 0

Input 2:
 A = [1, 2, 3]
 B = [2, 3, 4]
 C = 2

 Output 2: 1
 */

#include<stdio.h>
#include<string.h>

int hotelBook(int a[],int d[],int l)
{
	int i=0,j=0;
	while(i<l-1)
	{
		if(d[i] <= a[j+1])
		    {
                       i++;
		       j++;
		    }

		else      
		return 0;
	
	}
	return 1;
}


int main()
{
	int A[3] = {1,2,3};
	int D[3] = {2,3,4};
	int ret = hotelBook(A,D,3);
	printf("%d",ret);
	return 0;
}
