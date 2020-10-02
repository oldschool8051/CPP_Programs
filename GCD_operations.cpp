/****************************************
**     Solution by Siddhartha          **
****************************************/
#include <iostream>
#define ll long long int
#define fe(i, a, b) for (int i = a; i <= b; i++)
#define fl(i, a, b) for (int i = a; i < b; i++)
#define vc vector<int>
#define mod 1000000007
#define el "\n"
#include <bits/stdc++.h>
using namespace std;
 
int32_t main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
   int t;
      cin >> t;
      while (t-- > 0)
      {
          int n;
          cin >> n;
          int a[n];
          bool check = true;
          fl(i,0,n){
              int ind = i + 1;
              cin >> a[i];
              if(a[i]>ind){
                  check = false;
              }
              if((ind%a[i])!=0)
                  check = false;
          }
          if(check)
              cout << "YES" << el;
              else
              {
                  cout << "NO" << el;
              }
              
          }  
 
    return 0;
}