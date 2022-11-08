/* lhs n=121
rhs n=121 ---------palindrome
n=123---lhs
321-rhs---------not palindrome */
#include <iostream>
using namespace std;
int main()
{
  int n,temp,lno,sum=0;
  cin>>n;
  temp=n;
  while(n>0)
  {
    lno= n%10;
    sum=sum*10+lno;
    n=n/10;
  }
  n=temp;
  if(n==sum)
  {
    cout<<"palindrome no:"<<n;
  }
  else
  {
    cout<<"Not palindrome no:"<<n;
  }
  return 0;
}
