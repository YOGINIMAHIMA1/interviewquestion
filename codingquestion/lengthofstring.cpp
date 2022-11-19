#include <iostream>
using namespace std;
int main()
{
  
  cout<<sizeof("MahimaBhardwaj")<<endl;
  cout<<"MahimaBhardwaj"<<endl;
  cout<<sizeof("M@1#'2\0")<<endl;
  cout<<"M@1#'2\0"<<endl;
  cout<<sizeof("He\0llo\0")<<endl;
  cout<<"He\0llo\0"<<endl;
  cout<<sizeof("mA1#@%^&*()_+\0")<<endl;
  cout<<"mA1#@%^&*()_+\0"<<endl;
  return 0;
}
    
/* time complexity-O(1)
  space complexity- O(1) */
