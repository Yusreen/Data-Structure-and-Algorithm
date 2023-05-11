#include <stdio.h>
using namespace std;

int main()
{
//Create an array
int arr[11]={6,7,8,9,11,12,15,16,17,18,19};

int l=arr[0];   //Lower number
int h=arr[11] ; // higher number

int n= 11; //number of elements
 int difference= l-0;

 for (int i = 0; i < n; i++)
 {
     if (arr[i] - i != difference)
     {
         while (difference < arr[i] - i) //difference is not uniform anymore
         {
             printf("The number is %d\n", difference + i);
             difference++;
         }
     }
 }
}