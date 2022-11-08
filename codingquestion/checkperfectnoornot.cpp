#include <iostream>
using namepsace std;
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
    cout<<"perfect number :";
  }
  else
  {
    cout<<"not perfect number :";
  }
  return 0;
}
