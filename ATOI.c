/*  Write  a program to implement user defined function of atoi 

Ex:-
input=12345
output=12345"

input=12a45
output=invalid

input=1234.5
output=invalid */
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[30];
    scanf("%s",str);
    int i,n=0;
    for(i=0;str[i];i++)
    {
        if(str[i] == '-')
        {
            i++;
        }
        if(str[i]>= '0' && str[i] <= '9')
        {
            n=n*10+str[i] - 48;
        }
        if(!isdigit(str[i]))
        {
               printf("invalid");
               return 0;
        }
        
    }
    if(str[0] == '-' && n==0)
    {
    n=-n;
    printf("%d",n);
    return 0;
    }
    printf("%d",n);
    
}
