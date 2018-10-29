#include<bits/stdc++.h>
#define ll long long int
#define fi first
#define se second
#define pb push_back
#define pob pop_back
#define W while
#define fn(i,x) for(i=0;i<x;i++)
#define fs(i,s,x) for(i=s;i<x;i++)
#define fr(i,x) for(i=x;i>=0;i--)
#define fit(it,s) for(it=s.begin();it!=s.end();it++)
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vii vector<int>
#define vll vector<ll>
#define mii map<int,int>
#define mll map<ll,ll>
#define mod 1000000007
#define MAX 100005
#define M 32
using namespace std;
/*
ll gcd(ll a,ll b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
*/

ll modex(ll x,ll y)
{
    x=x%mod;
    ll r=1;
    while(y>0)
    {
        if(y%2==1)
            r=(r*x)%mod;
        y/=2;
        x=(x*x)%mod;
    }
    return r;
}

ll mm(ll x,ll y)
{
    return (x*y)%mod;
}
ll fact[1001];
ll inv_fact[1001];
void build(void)
{
    fact[0]=1;
    ll i;
    fs(i,1,1001)
    {
        fact[i]=mm(fact[i-1],i);
    }
    inv_fact[1000]=modex(fact[1000],mod-2);
    fr(i,999)
    {
        inv_fact[i]=mm(inv_fact[i+1],i+1);
    }
}

ll C(ll n,ll r)
{
    if(n<r)
        return 0;
    ll res=1,i=1;
    W(i<=r)
    {
        res=mm(n--,res);
        i++;
    }
    return mm(res,inv_fact[r]);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    ll t,n,k,i,ans,t1,t2,t3;
    cin>>t;
    W(t--)
    {
        cin>>n>>k;
        build();
        ans=0;
        fn(i,k+1)
        {
           //ans+=(2^i)*((k-1)C(i-1))*(n-k+1)C(i)
           t1=modex(2,i);
           t2=C(k-1,i-1);
           t3=C(n-k+1,i);
           ans=(ans+mm(mm(t1,t2),t3))%mod;
        }
        cout<<ans<<endl;
    }
    return 0;
}

