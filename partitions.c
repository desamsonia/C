#include<stdio.h>

int partion(int *arr,int n)
{
  int sum=0,ans=0;
 for(int i=0;i<n;i++) sum+=arr[i];
       
       if(sum%3!=0) return 0;
       sum=sum/3;
       
       int pre[n];
       int suff[n];
       
       if(arr[0]==sum) pre[0]=1;

       if(arr[n-1]==sum) suff[n-1]=1;

       int sum1=arr[0],sum2=arr[n-1];
       for(int i=1;i<n;i++)
       {
           sum1+=arr[i];
           if(sum1==sum) pre[i]=1;  
       }
       
       for(int i=0;i<n;i++)
	       printf("%d ",pre[i]);
       printf("\n");

       for(int i=n-2;i>=0;i--)
       {
           sum2+=arr[i];
           if(sum2==sum) suff[i]=1;
       }
       
       for(int i=0;i<n-2;i++)
       {   if(pre[i]==1)
         {
           for(int j=i+2;j<n;j++)
           {
               if(suff[j]==1) ans++;
           }
         }
       }
     return ans;
}

int main()
{
	int arr[4] = {0,1,-1,0};
	int ret = partion(arr,4);
	printf("%d",ret);
	return 0;
}
