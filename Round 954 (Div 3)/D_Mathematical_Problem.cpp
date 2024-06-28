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
        ll n; cin>>n;
        string s; cin>>s;
        if(n==2) cout<<stoi(s)<<endl;
        else if(n==3)
        {
            ll v1= ((s[0]-'0')*10 + (s[1]-'0')) + (s[2]-'0');
            ll v2= ((s[0]-'0')*10 + (s[1]-'0')) * (s[2]-'0');
            ll v3= ((s[1]-'0')*10 + (s[2]-'0')) + (s[0]-'0');
            ll v4= ((s[1]-'0')*10 + (s[2]-'0')) * (s[0]-'0');
            cout<<min({v1,v2,v3,v4})<<endl;
        }
        else
        {
            bool ok=false;
            for(ll i=0;i<n;i++)
            {
                if(s[i]=='0') 
                {
                    ok=true;
                    cout<<0<<endl;
                    break;
                }
            }
            if(ok) continue;

            ll ans=INT_MAX;
            ll val=0;
            for(ll i=0;i<n-1;i++)
            {
                val= (s[i]-'0')*10 + (s[i+1]-'0');
                for(ll j=0;j<n;j++)
                {
                    if(j!=i and j!=i+1)
                    {
                        if((s[j]-'0')!=1) val+= s[j]-'0';
                    }
                }
                ans=min(ans,val);
            }
            cout<<ans<<endl;
        }
    }
}