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
    ll t; cin>>t;
    while(t--)
    {
        ll n,m; cin>>n>>m;
        ll a[n+2][m+2];
        for(ll i=0;i<(n+2);i++)
        {
            for(ll j=0;j<(m+2);j++) 
            {
                a[i][j]=0;
            }
        }
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=m;j++) 
            {
                cin>>a[i][j];
            }
        }
        ll now,l,r,u,d;
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=m;j++)
            {
                now= a[i][j];
                u= a[i-1][j];
                d= a[i+1][j];
                r=a[i][j+1];
                l=a[i][j-1];

                if(now>l and now>r and now>u and now>d)
                {
                    a[i][j]= max({l,r,u,d});
                }
            }
        }

        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=m;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}