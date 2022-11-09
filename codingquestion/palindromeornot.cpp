/* lhs=rhs=
121=121-------palindrome no*/
#include <iostream>
using namespace std;
int main()
{
  int n,sum=0;
  cin>>n;
  int temp=n;
  while(n>0)
  {
    int lno= n %10;
    sum=sum *10 + lno;
    n=n/10;
  }
  n=temp;
  if(n==sum)
  {
    cout<<"palindrome no:"<<n ;
  }
  else
  {
    cout<<"not palindrome no :"<<n;
  }
  return 0;
}
