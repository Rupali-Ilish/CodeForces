#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define endl "\n"
#define pb push_back
#define pll pair<ll, ll>
#define choto(x) sort((x).begin(), (x).end())
#define boro(x) sort((x).rbegin(), (x).rend())

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

int32_t main()
{
    fast_io;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        char a[n + 1][m + 1];
        vector<ll> v;
        for (ll i = 1; i <= n; i++)
        {
            ll cnt = 0;
            for (ll j = 1; j <= m; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == '#')
                    cnt++;
            }
            v.pb(cnt);
        }
        ll mx = 0;
        ll sz = v.size();
        ll row = 0, col = 0;
        for (ll i = 0; i < sz; i++)
        {
            if (v[i] > mx)
            {
                mx = v[i];
                row = i + 1;
            }
        }
        ll mid = mx / 2;
        for (ll i = 1; i <= m; i++)
        {
            if (a[row][i] == '#')
            {
                col = i + mid;
                break;
            }
        }
        cout << row << " " << col << endl;
    }
}