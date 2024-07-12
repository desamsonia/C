/*Write a program to check given string is palindrame or not.
ex:-
------
input           output
--------       ---------
madam           palindrome
noon            palindrome
kill            not palindrome  */
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int i,j;
    int len=strlen(str)-1;
    for(i=0,j=len ; i<=j ;i++,j--)
    {
       // printf("%d %d\n",i,j);
        if(str[i] != str[j])
        {
            break;
        }
    }
    
    if(i>j)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
}
