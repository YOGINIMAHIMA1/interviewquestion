#include <iostream>
using namespace std;
int main()
{
int n,max=arr[0],min=arr[0];
cin>>n;
for(int i=1;i<=n;i++)
{
  cin>>arr[i];
}
  for(int i=1;i<=n;i++)
  {
    if(arr[i]>max)
    {
      max=arr[i];
    }
    if(arr[i]<min)
    {
      min=arr[i];
    }
  }
  cout<<max<<endl;
  cout<<min<<endl;
  return 0;
}
