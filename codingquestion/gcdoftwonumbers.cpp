/* gcd or hcf---------greatest common factor or highest common factor 
 a=8----> 1,2,4,8  \
 b=6---->1,2,3,6   /--------- 2- gcd or hcf
  
  ex2 -  a=9------1,3,9  \
         b=3------1,3    /   ---------3 ---- gcd or hcf
         
         */
#include <iostream>
using namespace  std;
int main()
{
  int a,b,i,gcd;
    cin>>a>>b;
  for(int i=1;i<=a && i<=b;i++)
  {
    if( a%i===0 && b%i==0)
    {
      gcd=i;
    }
  }
  cout<<"gcd of two number is:"<<gcd;
  return 0;
}
