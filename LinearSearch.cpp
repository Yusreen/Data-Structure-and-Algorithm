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
/**
 * Linear search base example
*/
int LinearSearch(struct Array arr,int key)
{
    int i;
    for(i=0;i<arr.length;i++)
    {
        if(key==arr.A[i])
           return i;
    }
    return -1;
}
/**
 * Improving the linear search by 1
 * Transposition : Swapping the position of the key by -1
 * Move the key up by 1 index each time
*/
int LinearSearch1(struct Array *arr,int key)
{
    int i;
    for(i=0;i<arr->length;i++)
    {
        if(key==arr->A[i])
        {
          //swap
           swap(&arr->A[i],&arr->A[i-1]);
           return i;
        }
          
    }
    return -1;
}
/**
 * Move the key to the front
*/
int LinearSearch2(struct Array *arr,int key)
{
    int i;
    for(i=0;i<arr->length;i++)
    {
        if(key==arr->A[i])
        {
          //swap
           swap(&arr->A[i],&arr->A[0]);
           return i;
        }
          
    }
    return -1;
}
int main()
{
    struct Array arr={{2,3,4,5,6},10,5};

    printf("%d\n",LinearSearch2(&arr,5));
    Display(arr);

    return 0;
}