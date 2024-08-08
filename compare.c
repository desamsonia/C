#include<stdio.h>

int main(){

char a = 0;
short int b = 0;
printf("%d", sizeof(b+a));// == sizeof(a+b));
return 0;
}

