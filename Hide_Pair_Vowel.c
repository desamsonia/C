/* write a program to hide the pair of vowels in given string.
Note:- No case-sensitive
examples:-
input                                               output
-------                                               --------
vector india                                     vector ind**
vector in hyd                                   there is no pair of vowels to hide
ind has bEen developing                 ind has b**n developing
for me its okay                                there is no pair of vowels to hide       */

#include<stdio.h>
#include<string.h>
int check_Vowel(char ch)
{
    char v[10] = {'a','e','i','o','u','A','E','I','O','U'};
    int i;
    for(i=0;i<10;i++)
    {
      if(v[i] == ch)
         return 1;
    }
    return 0;
}
int main()
{
   char str[30];
   scanf("%[^\n]s",str);
   int i,cnt=0,flag;
   for(i=0;str[i];i++)
   {
      if(((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
       {
          if(check_Vowel(str[i])  && check_Vowel(str[i+1]))
          {
            cnt++;  
           str[i] = '*';
           str[i+1] = '*';
           }
       }
       else if((str[i] >= '0' && str[i] <= '9'))
            {
              flag=1;  
              break;
            }
        else if(str[i] == '@')  
        {
            flag=1;
            break;
        }
   }
   if(cnt==1 && !(flag == 1)) printf("%s",str);
   else if(flag==1)printf("invalid input");
   else printf("there is no pair of vovels to hide\n");
   return 0;
}

