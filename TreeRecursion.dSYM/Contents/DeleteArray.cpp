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

void Append (struct Array *arr, int x) //We call a pointer to an array as we will modify the array
{
    //Check for sufficient space
    if(arr->length < arr->size)
         arr->A[arr ->length++]=x;

}
int Delete(struct Array *arr, int index)
{
   int x=0;
   int i;
   //Check the index first
   if(index >=0 && index <arr->length)
   
    x= arr ->A[index];
    for (i=index; i<arr->length-1;i++)
        arr -> A[i]= arr->A[i+1];
    
    arr ->length --;
    return x;
    
}

void Insert(struct Array *arr, int index, int x)
{
    //Check if index is valid
    if(index >=0 && index <=arr->length)
    {
        int i;
        for(i=arr ->length; i>index;i--)
          arr ->A[i] = arr ->A[i-1];
        
        arr ->A[index]=x;
        arr ->length ++;
           
    
    }
  
}
int main()
{
struct Array arr={{2,3,4,5,6},10,5};

printf("%d\n",Delete(&arr,4));
Display(arr);
return 0;

}
