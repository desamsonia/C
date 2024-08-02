/* program to list the primenumbers in a range where atleast once occurs of the supplied digit found.


    input1 : 10000  
    input2 : 99999
    input3 -> digit = 3
    output  : 10003                                */

#include<stdio.h>
#include<math.h>
int main()
{
int max,min,s,data,cnt=0;
int i,d,r;
printf("Enter range:");
scanf("%d%d",&min,&max);
printf("Enter digit:");
scanf("%d",&d);
for(data=min;data<=max;data++)
{
 s=sqrt(data);
 for(i=2;i<=s;i++)
 {
  if(data%2==0)
  {
  break;
  }
  }
  if(i>s)
  {
  int temp=data;
  while(temp>0)
  { 
     r=temp%10;
     if(r==d)
     {
   
     printf(" %d",data);
     
     //break;
     }
     temp=temp/10;
  }
  //fflush(stdout);
  }
 
  }
return 0;
}  
  
  
