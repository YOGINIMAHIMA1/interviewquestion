/* n=6
factor= 1,2,3,6
1+2+3=n
6=6 ------------perfect no */
#include <iostream>
using namespace std;
int main()
{
  int n,sum=0;
  cin>>n;
  for(int i=1;i<n;i++)
  {
    if(n%i==0)
    {
      sum=sum+i;
    }
  }
  if(n==sum)
  {
    cout<<"perfect no:"<<n;
  }
  else
  {
    cout<<"Not perfect no:"<n;
  }
  return 0;
}
      
