#include <stdio.h>
using namespace std;

int fact (int n)
{
    if (n==0) return 1;
    return fact(n-1)*n;
}
/**
 * nCr : no recursion
*/
int nCr (int n, int r)
{
    int num, den;
    num = fact(n);
    den= fact(r) *fact(n-1);

    return num/den;
}

/*
* NCR: Using recursion
*/
int NCR(int n, int r)
{
    if(n==r || r==0)
     return 1;

    return NCR(n-1,r-1) + NCR(n-1,r);

}

int main()
{
    printf("%d \n",NCR(4,2));
    return 0;
}