/* Sort Elements by Frequency of Occurrences */
/* i/p: 1 2 3 3 2 4 1 4 4 5 
   o/p: 4 4 4 2 2 3 3 1 1 5 */
/* not have full logic*/
#include<stdio.h>
int main()
{
   int arr[10] = {1,2,3,3,4,4,1,4,4,5};
   int s[10];
   int sort[10][2];
   int i,j,k,cnt,f=0;
   for(i=0;i<10;i++)
   {
      cnt = 0;
      for(j=1;j<10;j++)
      {
         if(arr[i] == arr[j])
           {
            cnt++;
           } 
      }
         printf("count = %d\n",cnt);
      for(int l=0;l<10;l++)
      {
         for(int m=0;m<2;m++)
         {
             sort[l][0] = arr[i];
             sort[l][1] = cnt;
         }
      }

   }
  
} 
