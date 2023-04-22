#include <stdio.h>
using namespace std;

/**
 * Recursion 1
*/
int power(int m, int n)
{
if (n==0)
   return 1;
return power(m, n-1)*m;
}
/**
 * Recursion 2
*/
int power1(int m, int n)
{
    if (n==0)
       return 1;
    if(n%2==0)
      return power1(m*m , n/2);
    return m*power1(m*m, (n-1)/2);
}
int main()
{
    int r=power1(3,4);
    printf("%d",r);

    return 0;

}