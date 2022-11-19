#include <iostream>
using namespace std;
int main()
{
  
  cout<<sizeof("MahimaBhardwaj")<<endl; //15
  cout<<"MahimaBhardwaj"<<endl; //MahimaBhardwaj
  cout<<sizeof("M@1#'2\01")<<endl; //9
  cout<<"M@1#'2\01"<<endl; //M@1#'2
  cout<<sizeof("He\0llo\0")<<endl; //8
  cout<<"He\0llo\0"<<endl; //He
  cout<<sizeof("mA1#@%^&*\0()_+\0")<<endl; //16
  cout<<"mA1#@%^&*\0()_+\0"<<endl;//mA1#@%^&*
  return 0;
}
    
/* time complexity-O(1)
  space complexity- O(1) */
