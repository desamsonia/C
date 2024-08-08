#include<stdio.h> 

#define R 10 
#define C 20 

int main() 
{ 
int (*p)[R][C]; 

printf("%d\n", sizeof(**p));  //20*4 = 80
printf("%d\n", sizeof(*p)); //10*20*4 = 800
printf("%d\n", sizeof(p)); //8
//getchar(); 
return 0; 
} 

