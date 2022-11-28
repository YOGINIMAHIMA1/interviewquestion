#include <iostream>
using namespace std;
 int main()
 {
   int n,hole,value;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
     cin>>arr[i];
   }
   for(int i=1;i<n;i++)
   {
     int value=arr[i];
     hole=i;
     while(arr[hole]>=0&&arr[hole-1]>value)
     {
       arr[hole]=arr[hole-1];
       hole=hole-1;
     }
     arr[hole]=value;
   }
   for(int i=0;i<n;i++)
   {
     cout<<arr[i]<< " ";
   }
   return 0;
 }
/* worst time complexity- O(n^2)
   best TC- O(n)
 Avg TC- O(n)
 SC- O(1)
 */
