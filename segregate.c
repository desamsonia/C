/* Segregate 0’s, 1’s and 2's in an array */
/*o/p: 0 0 0 1 1 1 1 1 1 1 2 2 2*/
#include<stdio.h>
#include<string.h>
int main()
{
    int arr[13] = {1,2,0,1,2,0,1,1,1,2,1,0,1};
    int a1[13],b1[10],c1[10];
    int i,j,k=0,l=0,m=0;
    for(i=0;i<13;i++)
    {
        if(arr[i] == 0)
        {
            a1[k++] = arr[i];
        }
        if(arr[i] == 1)
        {
            b1[l++] = arr[i];
        }
        if(arr[i] == 2)
        {
            c1[m++] = arr[i];
        }
    }
    printf("k = %d\n",k);
    printf("l = %d\n",l);
    memmove(a1+3,b1,7*sizeof(int));
    memmove(a1+10,c1,7*sizeof(int));
    for(i=0;i<13;i++)
    {
       printf("%d ",a1[i]);
    }
    printf("\n");
/*
 for(i=k,l=0; l<7 && i<10; i++,l++)
   {
      a1[i] = b1[l];
      //printf("%d\n",b1[l]);
   }
for(i=0;i<10;i++)
    {
       printf("%d ",a1[i]);
    }*/
}