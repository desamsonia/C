#include<stdio.h>

void find (int arr[], int n)
{
  int result = -1;
  
  for(int i=0; i<n; i++)
  {
    
    int left_sum =0;
    for(int j=0; j<i; j++)
    {
       // printf("%d \n",arr[i]);
        left_sum += arr[i];
        //printf("left_sum = %d\n",left_sum);
        //printf("righ_sum = %d\n",right_sum);
    }
    
    int right_sum =0;
    for(int j=i+1; j<n; j++)
    {
       right_sum += arr[i];
       //printf("righ_sum = %d\n",right_sum);
    } 
   //printf("left_sum = %d\n",left_sum);
    //printf("righ_sum = %d\n",right_sum);
    if(right_sum == left_sum)
    {
        printf("matchedd\n");
        printf("left_sum = %d\n",left_sum);
        printf("righ_sum = %d\n",right_sum);
        result = i;

    }    
  }
  printf("First Point of equilibrium is at index = %d\n", result);
    return;
}

int main ()
{
  int arr[]={-4, 3, 0, 2, -7, 1, 5};
  int n = sizeof(arr)/sizeof(arr[0]);
  find (arr, n);
  return 0;
}