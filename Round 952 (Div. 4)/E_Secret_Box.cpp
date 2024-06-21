#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define pi acos(-1.0)
#define pb push_back
#define sqrt(x) sqrtl(x)
#define pll pair<ll, ll>
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
#define choto(x) sort((x).begin(), (x).end())
#define boro(x) sort((x).rbegin(), (x).rend())
#define allout(x)      \
  for (auto &it : x)   \
    cout << it << " "; \
  cout << endl
#define out(y, a, n)          \
  for (ll i = a; i <= n; i++) \
    cout << y[i] << " ";      \
  cout << endl
#define fix(n, val) fixed << setprecision(n) << val
#define ff first
#define ss second
#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

int32_t main()
{
  fast_io;
  ll t;
  cin >> t;
  while (t--)
  {
    ll x, y, z, k;
    cin >> x >> y >> z >> k;
    ll ans = 0;
    bool ok = false;
    for (ll i = 1; i <= x; i++) // 2000 max
    {
      for (ll j = 1; j <= y; j++) // 2000
      {
        ll th = k / (i * j);
        if (k % (i * j) == 0 and th <= z)
        {
          ans = max(ans, (x - i + 1) * (y - j + 1) * (z - th + 1));
        }
      }
    }
    cout << ans << endl;
  }
}