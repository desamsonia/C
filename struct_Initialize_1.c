/* Struct initialization using struct pointer */
/* Preferable method to initilize members of structure */
#include <stdio.h>
typedef struct student 
{
    int roll;
    char name[20];
    float marks;
}S1;

S1 input(S1 *p)
{
  printf("Enter roll:");
  scanf("%d", &(p->roll));
  printf("Enter name:");
  scanf("%s",(p->name));
  printf("Enter marks:");
  scanf("%f",&(p->marks));
}

S1 print(S1 var)
{
    printf("%d %s %f",var.roll,var.name,var.marks);
}
int main()
{
    S1 var;
    input(&var);
    print(var);
}