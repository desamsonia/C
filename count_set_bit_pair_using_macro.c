#include<stdio.h>
#define SETPAIRCOUNT(data,i,c,s) for(i=31;i>=0;i--){\
                                  if((data>>i) &1){\
                                        c++;\
                                        if(c==2){\
                                         s++;c=0;}}\
                                  else c=0;}\
                                  printf("%d\n",s);

int main()
{
    int data,c=0,i,s=0;
    scanf("%d",&data);
    SETPAIRCOUNT(data,i,c,s)
}
