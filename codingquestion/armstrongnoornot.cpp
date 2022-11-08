/* armstrong no- n=123
              1^3 + 2^3 + 3^3= 1+8+27=36
              123 is not equal to 36 so it is not armstrong number.
              */
#include <iostream>
using namespace std;
int main()
{
  int n,lno,cube,temp,sum=0;
  cin>>n;
  temp=n;
  while(n>0)
  {
    lno=n%10;
    cube=lno * lno*lno;
    sum=sum+cube;
    n=n/10;
  }
  n=temp;
  if( n==sum)
  {
    cout<<"Armstrong no:"<<n;
  }
  else
  {
    cout<<"Not Armstrong no:"<<n;
  }
  return 0;
}
    
