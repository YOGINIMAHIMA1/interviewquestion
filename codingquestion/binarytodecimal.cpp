/*  n=101
1 * 2^2+  2^1*0+2^0*1=5 */
#include <iostream>
using namespace std;
int main()
{
  
  int n,sum=0,i=0;
  cin>>n;
  while(n>0)
  {
    
    int lno= n % 10;
    sum=sum+pow(2,i)*lno;
    n=n/10;
    i++;
  }
  cout<<sum;
  return 0;
}
    
