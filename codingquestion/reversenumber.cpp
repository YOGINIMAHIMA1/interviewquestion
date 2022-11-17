/* reverse number-  n=289
    o/p-  982
    */
#include <iostream>
using namespace std;
int main()
{
  int n,sum=0;
  cin>>n;
  while(n>0)
  {
    int lno=  % 10;
    sum= sum* 10 +lno;
    n=n/10;
  }
  cout<<"reverse of number:"<<sum;
  return 0;
}
/* time complexity- O(n)
space complexity- O(1)
*/
