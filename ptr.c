# include<stdio.h>
# include<stdlib.h>

void fun(int *p)
{
   p = (int*)malloc(sizeof(int));
   printf("fun:%p\n",p);
}

int main()
{
	int *p;
	fun(p);
        p=(int*)malloc(sizeof(int));
        printf("main:%p\n",p);
	*p = 6;
	printf("%d\n",*p);
	return(0);
}
