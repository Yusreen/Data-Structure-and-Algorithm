#include <stdio.h>
using namespace std;

int main()
{
    int *p, *q;
    //Create an array in heap
    p=new int[5];
    p[0]=3;p[1]=5;p[2]=7;p[3]=9;p[4]=11;

    //Increase the size of p
    //Create a pointer q

    q=new int[10];
    for(int i=0; i<5;i++)
    {
        q[i]=p[i];
    }
 delete []p; //Delete array to prevent memory leak
 //Assign address of P to Q
   p=q;


    for(int i=0; i<5;i++)
    {
        printf("%d \n",q[i]);
    }
    //Since we want P to point to array of size 10, delere Q
 q=NULL;
    return 0;
}