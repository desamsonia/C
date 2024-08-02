#include "header.h"
extern int cnt;

void add(DATABASE *p)
{
   printf("Enter name:");
   scanf("%s",p[cnt].name);
   printf("Enter phone number:");
   scanf("%s",p[cnt].phone);
   printf("Enter email id:");
   scanf("%s",p[cnt].email);
   cnt++;
}