#include <iostream>
using namespace std;
int main()
{
  int a,b,swap;
  cin>>a>>b;
  swap=a;
  a=b;
  b=swap;
  cout<<a<<endl<<b;
  return 0;
}
/* time complexity-O(1)
space complexity-O(1)
*/
