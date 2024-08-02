/*using single pointer */
// We can also use "print(&arr[0][0], m, n);" and "print((int *)arr[0], m, n);
#include <stdio.h>
void print(int *arr, int m, int n)
{
	int i, j,k=0;
	for (i = 0; i < m; i++)
	for (j = 0; j < n; j++)
        printf("%d ", *((arr+i*n) + j));
         
		// printf("%d ",*(arr+k));
         // k++;// *((arr+0*3) + 0) // arr+0+0 // *arr
                                            // *((arr+0*3) + 1) // *(arr+0+1) // *(arr+1)
                                            // *((arr+2*3)+1) // *(arr+5) //
        //printf("%d ",arr[i][j]);
}

int main()
{
	int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int m = 3, n = 3;
	
	print((int *)arr, m, n); // we must type cast before passing 
   // print(&arr[0][0],3,3);
   // print((int*)arr[0],3,3);
	return 0;
}
