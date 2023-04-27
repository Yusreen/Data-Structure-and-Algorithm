#include <stdio.h>

using namespace std;


struct Array
{
    int *A;
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    printf("\n Elements are \n");

    for (i=0;i<arr.length;i++)
    {
        printf("%d",arr.A[i]);
    }
}
int main()
{
struct Array arr;
int n,i;
printf("Enter size of an array");
scanf("%d", &arr.size);

arr.A= new int[arr.size];
arr.length=0;

printf("Enter number of numbers");
scanf("%d",&n);

printf("Enter all elements \n");
for(i=0; i<n; i++)
 scanf("%d", &arr.A[i]);

arr.length =n;
 
 Display(arr);


}