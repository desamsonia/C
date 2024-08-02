/* i/p:   I have many books 
   o/p:   books many have i
   */

#include<stdio.h>
#include<string.h>
void reverse(char *str) {
  int i = 0, j = strlen(str) - 1;
  char temp;
  while (i < j) {
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    i++;
    j--;
  }
  }
void reverse_words(char *str)
{
reverse(str);
reverse_letters(str);
}
void reverse_letters(char *str) {
  char *p;
  char t[100];
  int i = 0;
  p = strtok(str, " ");
  while (p) {
    reverse(p);
    strcpy(t + i, p);
   i += strlen(p);
    t[i] = ' ';
    i++;
    p = strtok(NULL, " ");
  }

  t[i-1] = '\0';
  strcpy(str, t);
}

int main()
{
char str[100];
gets(str);
reverse_words(str);
printf("%s\n",str);
return 0;
}














 
