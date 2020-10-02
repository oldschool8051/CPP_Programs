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

int kadane(int a[], int n)
{
    int msf = 0, meh = 0;
    fl(i, 0, n)
    {
        meh += a[i];
        msf = max(msf, meh);
        if (meh < 0)
            meh = 0;
    }
    return msf;
}

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
        int one = 0;
        fl(i, 0, n)
        {
            cin >> a[i];
            if (a[i] == 1)
                one++;
        }
        fl(i, 0, n)
        {
            if (a[i] == 1)
                a[i] = -1;
            else
            {
                a[i] = 1;
            }
        }
        int ans = one + kadane(a, n);
        cout << ans << el;
    }

    return 0;
}