#include<stdio.h>
void rotateRight(int arr[])
{
    int i;
    int l = arr[9-1];
    for(i=9-1;i>0;i--)
   { 
      arr[i] = arr[i-1];
   }
   arr[0] = l;
}
/*void rotateLeft(int arr[])
{
    int i;
    int f = arr[0];
    for(i=0;i<5;i++)
    {
        arr[i] = arr[i+1];
    }
    arr[5-1] = f;
}*/
int main()
{
   int arr[9] = {1, 3, 0, 8, 12, 0, 4, 0, 7};
   int i;
   for(i=0;i<4;i++)
   {
    rotateRight(arr);
   }
   for(i=0;i<9;i++)
   {
    printf("%d ",arr[i]);
   }
}