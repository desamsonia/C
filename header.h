#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 5
int cnt;

typedef struct dataBase
{
    char name[20];
    char phone[10];
    char email[30];

}DATABASE;
void add(DATABASE *);
void delete(DATABASE *);
void view(DATABASE *);
void sort(DATABASE *);



