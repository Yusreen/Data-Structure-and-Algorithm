#include <stdio.h>
using namespace std;

struct Array
{

    int A[20];
    int size;
    int length;
};

// The first method is to calculate the sum of all elements in the array,sum
// use s= n(n+1)/2
// The missing value is s-sum


/** 
 * Method 1
 int main()
{
//Create an array
int arr[11]={1,2,3,4,5,6,8,9,10,11,12};
int sum= 0;


int i;
for (i=0; i< 11; i++)
{
    sum= sum +  arr[i];
}
    int s= (12*(12+1))/2;

    printf("The missing elsement is %d", s-sum);

}
**/

/**
 * Method 2: checking the difference between the index and 
*/

int main()
{
//Create an array
int arr[11]={6,7,8,9,10,11,13,14,15,16,17};
int l=arr[0];   //Lower number
int h=arr[11] ; // higher number

int n= 11; //number of elements

//Consider the indices
//6-0 =6
//7-1=6
//13-6=7 , At index 6, we have the missing number.
//Missing number is index+difference, which is 6+6 in this case
 int difference= l-0; // since the lowest number is at index 0

 for (int i=0; i<n; i++)
 {
    if(arr[i]-i!= difference)
    {
        printf("Missing element is %d",i+difference);
        break;
    }
 }



}
