#include <iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
  cin>>arr[i];
}
for(i=n-1;i>=1;i--)
{
  cout<<arr[i];
}
return 0;
}
/*
time complexity- O(n)
space complexity-O(1)
*/
