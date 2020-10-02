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
        int n, x;
        cin >> n >> x;
        if (n <= 2)
            cout << 1 << el;
        else
        {
            n -= 2;
            int req = n / x;
            req++;
            if (n % x != 0)
                req++;
            cout << req << el;
        }
    }

    return 0;
}