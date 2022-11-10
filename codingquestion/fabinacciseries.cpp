/* 1,2,3,5,8,13,............
a=1,b=2,c=3
a=2,b=3,c=5
a=3,b=5,c=8
a=5,b=8,c=13 */
#include <iostream>
using namespace std;
int main()
{
  int a,b,c,n;
  cin>>n;
  cin>>a>>b;
  for(int i=1;i<=n;i++)
  {
    c=a+b;
    a=b;
    b=c;
  }
  cout<<c<<endl;
  return 0;
}
