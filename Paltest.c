/*Given a string of lowercase letters in the range ascii[a-z], determine the index of one character that can be removed to make the string a palindrome. There may be more than one solution, but any will do. 
If the word is already a palindrome return -1 and if there is no solution, print "can not be a palindrome" . Otherwise, return the index of a character to remove.

Input format
string s: a string to analyze

Return value
The index of the character to remove , if there is a solution 

-1 , if it is already a palindrome 

print "can not be a palindrome" if no solution.

Constraints
All characters are in the range ascii[a-z] lowercase only.

Explanation:
Query 1: "aaab"
Removing 'b' at index 3 results in a palindrome, so return 3.
Query 2: "baa"
Removing 'b' at index 0 results in a palindrome, so return 0.
Query 3: "aaa"
This string is already a palindrome, so return -1.
Query 4: "madgaam"
no solution , so print "can not be a palindrome". */
#include<stdio.h>
#include<string.h>
int isPalindrome(char *str,int ret)
{
int low = 0;
int high = strlen(str)-1;
printf("missing @%d\n",ret);
while(low < high)
{
  if(low == ret)
  {
  printf("low and ret matched @=%d\n",ret);
  printf("high=%d\n",high);
  low++;
   }
  else if(high == ret)
  {
   printf("high and ret matched @=%d\n",ret);
   printf("low=%d\n",low);
   high--;
   }
   if(str[low] != str[high])
   {
   printf("Hiii\n");
    return 0;
   }
   low++;
   high--;
}
 return 1;
}   
int main()
{
char str[20];
int s;
scanf("%s",str);
int len = strlen(str);
for(int i=-1 ; i<len ; i++)
{
 s++;
 printf("s=%d\n",s);
 if(isPalindrome(str,i))
 {
 //s++;
 //printf("s=%d\n",s);
 printf("given string is palindrome\n");
 printf("int i=%d\n",i);
 return i;
 }
}
printf("can't be palindrone\n");
}
