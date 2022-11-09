/* prime no-only 2 factor */
#include <iostream>
using namespace std;
int main()
{
  int n,int count =0;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    if(n%i==0)
    {
      count ++;
    }
  }
  if(count==2)
  {
    cout<<"prime no:";
  }
  else
  {
    cout<<"not prime no:";
  }
  return 0;
}
