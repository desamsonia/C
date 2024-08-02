/* Ascending order (or) Dascending order of prime numbers in a given range 
Test case1: i/p1 :200
            i/p2 :20
            o/p : 223 225 227 229 233 235 237 239
Test case2:
            i/p1 : 700
            i/p2 : 30
            o/p : 711 721 731 733 741 743 751 753 755             
*/
#include<stdio.h>
#include<math.h>
int checkprime(int);
int digit_Ase(int);
int digit_Dase(int);
int main()
{
int data,cnt=0,f=1;
printf("Enter data(min) :");
scanf("%d",&data);
int n;
printf("Enter no of prime:");
scanf("%d",&n);
int pd=9,cd;
while(cnt<n)
{
  if(checkprime(data))
     {
       if(digit_Ase(data) || digit_Dase(data))
       {
       printf(" %d",data);
       }
       cnt++;
       }
       data++;
       }
   return 0;
}
 int checkprime(int n)
 {
 int s,i;
 s=sqrt(n);
 for(i=2;i<=2;i++)
 {
 
     if(n%i==0)
     return 0;
 }
 return 1;
 }        

int digit_Ase(int a)
{
int flag=1;
int pd=9,cd;
while(a>0)
{
  cd=a%10;
  if(cd<=pd);  
  else {
  flag =0;
  break;
  }
  pd = cd;
a/=10;
}
return flag;
}

int digit_Dase(int a)
 {
int flag=1;
int pd=0,cd;
while(a>0)
{
  cd=a%10;
  if(cd>=pd);  
  else {
  flag =0;
  break;
  }
  pd = cd;
a/=10;
}
return flag;
}        
         
         













/*while(cnt<n)                            //(data=min;data<=max;data++)
{
  s = sqrt(data);
  for(i=2;i<=s;i++)
  {
     if(data%i==0)
         break;
   }
   if(i>s)
   {
   int temp=data;
   while(temp>0)
   {
   cd=temp%10;
   if(cd<=pd)
    pd=cd;
   else
   {
    f=0;
    break;
   }
   temp/=10; 
    
   }
   printf(" %d",data);
   cnt++;
  
   }
   data++;
   }*/         
