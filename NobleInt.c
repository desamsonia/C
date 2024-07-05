/* return 1,if any of integer(p) is greter than other integers,and that integer p should be equal to count of integers greter than p, else return 0
 * wi: [1,2,3,3], here p=2 and it is greter than 3,3 and count =2, so return 1
 */


#include<stdio.h>

int NobleInt(int arr[],int n)
{
  int i,j,cnt=0;
   for(i=0;i<n;i++)
   {       cnt=0;
           for(j=0;j<n;j++)
           {       
                   if(arr[i] < arr[j])
		   {
			  printf("if_arr[i] = %d and arr[j] = %d\n",arr[i],arr[j]);
                          cnt++;
			  printf("cnt=%d\n",cnt);
		   }

		   //printf("inside arr[i] = %d\n",arr[i]);
           }      
	  printf("arr[i] = %d\n",arr[i]);
         if(arr[i] == cnt)
	  {	  
           printf("%d ",cnt);		  
             return 1;
          }    	     
   }
   return 0;
}

int main()
{
   int arr[4]={1,1,3,3};
   int ret = NobleInt(arr,4);
   printf("ret = %d\n",ret);
   return 0;
}

