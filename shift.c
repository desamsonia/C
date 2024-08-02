#include<stdio.h>
/*void rotateRight(int arr[])
{
    int i;
    for(i=9-1;i>0;i--)
   { 
      arr[i] = arr[i-1];
   }
   arr[0] = 0;
}*/
void rotateLeft(int arr[])
{
    int i;
    for(i=0;i<9;i++)
    {
        arr[i] = arr[i+1];
    }
    arr[9-1] = 0;
}
int main()
{
   int arr[9] = {1, 3, 0, 8, 12, 0, 4, 0, 7};
   int i;
   for(i=0;i<1;i++)
   {
    rotateLeft(arr);
   }
   for(i=0;i<9;i++)
   {
    printf("%d ",arr[i]);
   }
}