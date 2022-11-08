/* prime no- only two factor */
#include <iostream>
using namespace std;
int main()
{
  int n,count=0;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    if(n%i==0)
    {
      count++;
    }
  }
  if(count ==2)
  {
    cout<<"prime no:"<<n;
  }
  else
  {
    cout<<"not prime no:"<<n;
  }
  return 0;
}
      
