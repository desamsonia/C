#include<stdio.h>

int fun(char *str1) 
{ 
char *str2 = str1; 
while(*++str1); 
int a = str1-str2;
printf("a:%d\n",a);
return (str1-str2); 
}	 

int main() 
{ 
char *str = "geeksforgeeks"; 
printf("%d", fun(str)); 
//getchar(); 
return 0; 
} 

