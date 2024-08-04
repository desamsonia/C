// a pointer can point to any type,here integer pointer pointing to address of float variable

#include<stdio.h>
void main()
{
	float val=5.75;
	int *ptr=&val;
	printf("%.2f %.2f",*(float *)ptr,val);
}
