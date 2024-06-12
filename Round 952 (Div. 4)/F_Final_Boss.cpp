#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define endl "\n"
#define pb push_back
#define choto(x) sort((x).begin(), (x).end())
#define boro(x) sort((x).rbegin(), (x).rend())
#define ff first
#define ss second
#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
ll h, n;
vector<ll> dam(1e6), att(1e6);
ll he;
bool check(ll mid)
{
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        ll div = mid / att[i];
        sum += div * dam[i];
        if (sum >= he)
            return true;
    }
    return false;
}
int32_t main()
{
    fast_io;
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> h >> n;
        ll da = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> dam[i];
            da += dam[i];
        }

        for (ll i = 0; i < n; i++)
        {
            cin >> att[i];
        }

        he = h - da;

        ll lo = 0, hi = 1e12;
        ll ans = 1;
        while (lo <= hi)
        {
            ll mid = (lo + hi) / 2;
            if (check(mid))
            {
                ans = mid;
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }
        cout << ans + 1 << endl;
    }
}