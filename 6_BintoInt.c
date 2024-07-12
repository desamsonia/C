/* write a program to implement binary to int conversion
note:- input is string form
ex:-
input                                                                                     output
----------                                                                                ----------
001111                                                                                  15

10000000                                                                               128

01111111                                                                               127

00000000                                                                               0

101010a00                                                                            invalid input */

#include<stdio.h>
#include<string.h>
#include<math.h>
int binToInt(char *str)
{
    int len=strlen(str)-1;
    int a,dec=0,base=0,i;
    for(i=len;i>=0;i--)
    {
        if((str[i] >= '0' && str[i] <= '1'))
        {
         a = str[i] - 48;
         dec+=a*pow(2,base);
         base++;
        }
        else
        {
            return 0;
        }
    }
    return dec;
}
int main()
{
    char str[20];
    int d,base=0,a,i;
    scanf("%s",str);
    int len=strlen(str)-1;
    d=binToInt(str);
    if(d)
    {
        printf("%d",d);
    }
    else
    {
        printf("invalid input");
    }
    return 0;
}
