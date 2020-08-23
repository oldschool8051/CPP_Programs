/*
Print the following pattern:
*
**
***
****
*****
****
***
**
*
For nth rows.
*/

#include <iostream>
using namespace std;
int main() {
  int n,i=1;
  cin>>n;
  int mid=(n+1)/2;
  //For upper part
  while(i<=mid)
  {
    int j=1;
    while(j<=i)
    {
      cout<<"*";
      j++;
    }
    cout<<endl;
    i++;
  }
  //for lower part
  int lower=mid-1;
  int l=1;
  while(l<=lower)
  {
    int k=mid-l;
    while(k>=1)
    {
      cout<<"*";
      k--;
    }
    cout<<endl;
    l++;
  }
}
