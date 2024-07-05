#include <stdio.h>


void printarray(int arr[], int size)
{
    int i,j;
    for(i=0; i<size; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}


void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

//permutation function
void permutation(int *arr, int start, int end)
{
    if(start==end)
    {
        printarray(arr, end+1);
/*	int a;
        printf("___________________\n");
        for(a=0;a<=end;a++)
                printf("%d",arr[a]);
        printf("\n");*/

        return;
    }
    int i;
    for(i=start;i<=end;i++)
    {
        //swapping numbers
        swap((arr+i), (arr+start));
        permutation(arr, start+1, end);
        swap((arr+i), (arr+start));
    }
}

int main()
{
    //taking input to the array
    int size;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    int i;
    int arr[size];
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    //calling permutation function
    permutation(arr, 0, size-1);
    return 0;
}
