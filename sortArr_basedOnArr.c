
/* sorting of an array based on given another array
i/p: arr1 = 20,1,20,5,7,1,9,39,6,18,18 , arr2 = 20,1,18,39
o/p: 20 20 1 1 18 18 39 5 6 7 9 */

#include<stdio.h>
#include<string.h>
int check(int sub[],char ch)
{
   int i;
   for(i=0;i<4;i++)
   {
      if(sub[i] == ch)
        return 0;    
   }
   return 1;
}

int *sortArray(int b[],int k)
{
    int i,j;
     for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(b[i] > b[j])
            {
                int t = b[i];
                b[i] = b[j];
                b[j] = t;
            }
        }
    }
return b;

}
int main()
{
    int arr[11] = {20,1,20,5,7,1,9,39,6,18,18};
    int sub[4] = {20,1,18,39};
    int a[10],b[10];
    int i,j,l=0,k=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<11;j++)
        {

           if(arr[j] == sub[i])
             {
             a[l++] = arr[j];
            }
        }
    }
    for(i=0;i<11;i++)
    {
       if(check(sub,arr[i]))
            {
                b[k++] = arr[i];
            }
    }  
  sortArray(b,k);
  memmove(a+l,b,k*sizeof(int));
    for(i=0;i<11;i++)
    {
        printf("%d ",a[i]);
    }             
}
/* another way, not exact way */
/*
#include<stdio.h>
#include<string.h>
int main()
{
    int arr[11] = {20,1,20,5,7,1,9,39,6,18,18};
    int sub[4] = {20,1,18,39};
    int t1[5],t2[5],t3[5],t4[5],temp[10];
    int l1=0,l2=0,l3=0,l4=0,k=0;
    int i;
    for(i=0;i<11;i++)
    {
        if(arr[i] == sub[0])
        {
          t1[l1++] = arr[i];
        }
        else if(arr[i] == sub[1])
        {
            t2[l2++] = arr[i];
        }
         else if(arr[i] == sub[2])
        {
            t3[l3++] = arr[i];
        }
        else if(arr[i] == sub[3])
        {
            t4[l4++] = arr[i];
        }
        else
        {
            temp[k++] = arr[i];
        }
    
    }
    int j=0;
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(temp[i] > temp[j])
            {
                int t = temp[i];
                temp[i] = temp[j];
                temp[j] = t;
            }
        }
    }
memmove(t1+l1,t2,l2*sizeof(int));
memmove(t1+4,t3,l3*sizeof(int));
memmove(t1+6,t4,l4*sizeof(int));
memmove(t1+7,temp,4*sizeof(int));
    for(i=0;i<11;i++)
    {
        printf("%d ",t1[i]);
    }
}
*/