#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define pi acos(-1.0)
#define pb push_back
#define sqrt(x) sqrtl(x)
#define pll pair<ll,ll>
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define choto(x) sort((x).begin(), (x).end())
#define boro(x) sort((x).rbegin(), (x).rend())
#define allout(x) for(auto &it: x) cout<<it<<" "; cout<<endl
#define out(y,a,n) for(ll i=a; i<=n; i++) cout<<y[i]<<" "; cout<<endl
#define fix(n,val) fixed<<setprecision(n)<<val
#define ff first
#define ss second
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int32_t main()
{
    fast_io;
    vector<ll>v(2e5+5), cnt(2e5+5);
    ll n,k,q; cin>>n>>k>>q;
    while(n--)
    {
        ll l,r; cin>>l>>r;
        v[l]++;
        v[r+1]--;
    }
    for(ll i=1;i<=2e5+5;i++)
    {
        v[i]+=v[i-1];
        if(v[i]>=k) cnt[i]=1;
        cnt[i]+=cnt[i-1];
    }
    while(q--)
    {
        ll a,b; cin>>a>>b;
        ll ans= cnt[b]-cnt[a-1];
        cout<<ans<<endl;
    }
}