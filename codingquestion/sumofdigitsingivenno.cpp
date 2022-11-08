#include <iostream>
using namespace std;
int main()
{
  int n,lno,sum=0;
    cin>>n;
  while(n>0)
  {
    lno=n% 10;
    sum=sum+lno;
    n=n/10;
  }
  cout<<sum;
  return 0;
}
