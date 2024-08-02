/* Write a program to print all the LEADERS in the int array. 
An element is a leader if it is greater than all the elements to its right side. And the rightmost element is always a leader.
For example int the array {16, 17, 4, 3, 5, 2}, leaders are 17, 5 and 2 */
#include<stdio.h>
int main()
{
    int arr[6] = {16, 17, 4, 3, 5, 2};
    int i,j;
    for(i=0;i<=6-2;i++)
    {
       // printf("i = %d\n",i);
        if(arr[i] < arr[i+1]) // 16 < 17
        {

           // printf("arr[i] = %d and arr[i+1] = %d\n",arr[i],arr[i+1]);
            if(arr[i+1] < arr[i+2])  // 17 < 4
            {
              //  printf("arr[i+1] = %d and arr[i+2] = %d\n",arr[i],arr[i+1]);
                i++;  // 1
                continue;
            }
            else printf("%d \n",arr[i+1]);
        }
       /* else if(arr[i] == arr[i+1])
        {
            printf("%d \n",arr[i]);
        }  **/
    }
    for(i=6-1;i<6;i++)
    printf("%d \n",arr[i]);   
}