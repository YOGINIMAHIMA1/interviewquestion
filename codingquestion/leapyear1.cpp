#include <iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=0;i<=n;i++)
  {
     if(i%4==0&& i%100!=0 || i%400==0)
     {
         cout<<"leap year"<<" "<<i<<endl;
         }
         else{

     cout<<" not  leap year"<<" "<<i<<endl;

         }
     }

return 0;

  }




// tc- O(1)
sc-O(1)//
