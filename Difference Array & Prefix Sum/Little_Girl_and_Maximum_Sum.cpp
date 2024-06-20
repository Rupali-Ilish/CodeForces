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
#define output(x) for(auto &it: x) cout<<it<<" "; cout<<endl
#define fix(n,val) fixed<<setprecision(n)<<val
#define ff first
#define ss second
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int32_t main()
{
    fast_io;
    ll n,q;
    cin>>n>>q;
    vector<ll>v(n+2),dif(n+2);
    for(ll i=1;i<=n;i++) cin>>v[i];
    while(q--)
    {
        ll l,r;
        cin>>l>>r;
        dif[l]++;
        dif[r+1]--;
    }
    for(ll i=1;i<=n;i++) dif[i]+=dif[i-1];
    boro(dif);
    boro(v);
    ll sum=0;
    for(ll i=0;i<n;i++) sum+= dif[i]*v[i];
    cout<<sum<<endl;
}