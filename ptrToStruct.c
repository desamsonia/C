#include <stdio.h>
typedef struct student
{
   int roll;
   char name[20];
   float marks;
}S1;

int main()
{
    S1 v = {22,"ajdf",90.0};
    S1 var = {292,"kdfkj",39};
    S1 *q;
    S1 *p;
    p = &v;
    p = &var;
    printf("%lu\n",sizeof(p));
    printf("%lu\n",sizeof(q));
    printf("%d %s %f\n",(*p).roll,(*p).name,(*p).marks);
    // Error  printf("%d %s %f\n",*p.roll,*p.name,*p.marks);
    printf("%d %s %f\n",(*p).roll,(*p).name,(*p).marks);
    printf("%d %s %f",p->roll,p->name,p->marks);
}
