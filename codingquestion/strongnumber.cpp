/* strong number
n=123
1! + 2! + 3!=1+ 2*1 + 3*2*1=1+2+6=9 not equal to 123 so not strong number.
*/
#include <iostream>
using namespace std;
int main()
{
  int n,temp,fact=1,sum=0;
  cin>>n;
  temp=n;
  while(n>0)
  {
    int lno= n % 10;
    for(int i=1;i<=n;i++)
    {
    fact=fact * i;
    }
    n=n/10;
    
      sum=sum+fact;
    n=temp;
    if(n==sum)
    {
      cout<<"strong number :"<<n;
    }
    else 
    {
      cout<<"not strong number:"<<n;
    }
    return 0;
  }
      
    
