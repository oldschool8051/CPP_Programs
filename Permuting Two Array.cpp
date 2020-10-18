// Program in C++ -

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t; //No. of test cases 

  while (t--) {
    int n, k;
    cin >> n >> k;
    int a[n],b[n];
    for (int i = 0; i < n; i++)
      cin >> a[i];
    for (int i = 0; i < n; i++)
      cin >> b[i];
    sort(a, a + n);
    sort(b, b + n,greater<int>());

    bool flag = true;
    for (int i = 0; i < n; i++)
      if (a[i] + b[i] < k)
    flag = false;

    if (flag)
      cout << "YES\n";
    else
      cout << "NO\n";
  }

  return 0;
}
