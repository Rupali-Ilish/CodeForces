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
    ll n,m,k; cin>>n>>m>>k;
    vector<ll>v(n+5);
    for(ll i=1;i<=n;i++) cin>>v[i];
    vector<tuple<ll,ll,ll> >mvec(m+5);
    ll l,r,d;
    for(ll i=1;i<=m;i++)
    {
        cin>>l>>r>>d;
        mvec[i]= make_tuple(l,r,d);
    }
    vector<ll>cnt(m+5);
    while(k--)
    {
        ll a,b; cin>>a>>b;
        cnt[a]++;
        cnt[b+1]--;
    }
    for(ll i=1;i<=m;i++) cnt[i]+=cnt[i-1];
    for(ll i=1;i<=m;i++)
    {
        get<2>(mvec[i]) *= cnt[i];
    }
    vector<ll> newval(n+5);
    for(ll i=1;i<=m;i++)
    {
        newval[get<0>(mvec[i])]+= get<2>(mvec[i]);
        newval[(get<1>(mvec[i]))+1]-= get<2>(mvec[i]);
    }
    for(ll i=1;i<=n;i++) newval[i]+=newval[i-1];
    for(ll i=1;i<=n;i++)
    {
        cout<<(v[i]+newval[i])<<" ";
    }
    cout<<endl;
}