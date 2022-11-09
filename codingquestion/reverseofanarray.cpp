#include <iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=1;i<=n;i++)
{
  cin>>arr[i];
}
for(i=i-1;i>=1;i--)
{
  cout<<arr[i];
}
return 0;
}
