/* find fisrt missing integer number in an array
 * i/p: arr[] = [1,2,0] , o/p: 3
 * i/p: arr[] = [3,4,-1,1], o/p: 2
 * i/p: arr[] = [-8,-7,-6], o/p: 1
 */

#include<stdio.h>
int main()
{
	int arr[4] = {3,4,-1,1};
	int n[9] = {1,2,3,4,5,6,7,8,9};
	int i,j;
	int f;
	for(i=0;i<9;i++)
	{
		f=0;
		for(j=0;j<4;j++)
		{
			if(arr[j] == n[i])
			{
                                 f=1;
				break;
			}
		}

            if(f==0)
	    {
		    printf("%d ",n[i]);
	            break;
	    }
           
	}
	return 0;
}
