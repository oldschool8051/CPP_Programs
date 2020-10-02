/****************************************
**     Solution by Siddhartha          **
****************************************/
#include <iostream>
#define ll long long int
#define fe(i, a, b) for (long long int i = a; i <= b; i++)
#define fl(i, a, b) for (long long int i = a; i < b; i++)
#define vc vector<ll>
#define mod 1000000007
#define el "\n"
#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t-- > 0)
    {
        ll n;
        cin >> n;
        ll f[n * n];
        int k = 0;
        ll a[n][n];
        fl(i, 0, n)
        {
            fl(j, 0, n)
            {
                cin >> a[i][j];
                f[k] = a[i][j];
                k++;
            }
        }
        int c = 0;
        sort(f, f + (n * n));
        for (int m = n - 1; m >= 0; m--)
        {
            if (a[0][m] != f[m])
            {
                for (int i = 0; i <= m; i++)
                {
                    for (int j = i + 1; j <= m; j++)
                    {
                        swap(a[i][j], a[j][i]);
                    }
                }
                c++;
            }
        }
        cout << c << el;
    }

    return 0;
}