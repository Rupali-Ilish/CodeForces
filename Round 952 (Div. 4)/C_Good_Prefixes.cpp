#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define endl "\n"
#define pb push_back
#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

int32_t main()
{
    fast_io;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i];
        ll cnt = 0;
        ll sum = 0, mx = 0, val = 0;
        for (ll i = 0; i < n; i++)
        {
            mx = max(mx, v[i]);
            sum += v[i];
            val = sum - mx;
            if (val == mx)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}