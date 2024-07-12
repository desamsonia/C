/*   Write a program to check whether the user input is  integer or float data type.

note:- read input in string form

Example:

input: 82          Output: Integer number

input: 80.83    Output: Floating number

input: 8&0.83    Output: invalid input  */

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[30];
    int i,cnt=0;
    scanf("%[^\n]",str);
    if(str[0]=='.')
    { 
        printf("invalid input");
        return 0;
    }
    if(str[strlen(str)-1] == '.')
    {
        printf("invalid input");
        return 0;
    }
    for(i=0;str[i];i++)
    {
        if(str[i] == '.')
        {
            cnt++;
            i++;
        }
        if(!isdigit(str[i]))
        {
            printf("invalid input");
            return 0;
        }
    }
if(cnt==0) printf("integer number");
else if(cnt>1) printf("invalid input");
else printf("float number");


}
    
