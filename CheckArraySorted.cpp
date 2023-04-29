#include <stdio.h>
using namespace std;
struct Array
{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    printf("\n Elements are \n");

    for (i=0;i<arr.length;i++)
    {
        printf("%d ",arr.A[i]);
    }
}
void swap(int *x, int *y)
{
    int temp= *x;
    *x=*y;
    *y=temp;

}

void InsertSort(struct Array *arr,int x)
{
   int i=arr->length-1;
    if(arr->length==arr ->size) //check if array has free space
       return;
    
    while(arr ->A[i] >x)
    {
       arr ->A[i+1]=arr->A[i];
       i--;
    }
    arr->A[i+1]=x;
    arr ->length ++; //increase the length of the array
    
}
int IsSorted (struct Array arr)
{
    for(int i=0;i<arr.length-1;i++) //i<arr.length-1 as we want it to stop before the end of the array
{
    if(arr.A[i] > arr.A[i+1])
      return 0;
}

    return 0;
}
void Rearrange(struct Array *arr)
{
    int i,j;
    i=0;
    j=arr->length-1;
    while(i<j)
    {
        while(arr->A[i]<0)i++;
        while(arr->A[j]>0)j--;

        if(i<j) swap(&arr->A[i],&arr->A[j]);

    }

}

int main()
{
    struct Array arr={{2,-3,25,10,-15,-7},10,6};
    
    Rearrange(&arr);
    
    Display(arr);

    return 0;
}