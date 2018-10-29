#include<bits/stdc++.h>
#define ll long long int
#define ld long double
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
/*
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

    return r;
}
*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    ll t,n,i,si;
    ld r;
    cin>>t;
    W(t--)
    {
        cin>>n>>si;
        r=(ld)n*si;
        r/=(ld)sqrt(n-1);
        if(n!=1)
        {
            if(r<=100000000)
            {
            fn(i,n-1)
            cout<<0<<" ";
            cout<<fixed<<setprecision(6)<<r<<endl;
            }
            else
            cout<<-1<<endl;
        }
        else if(n==1 && si==0)
            cout<<si<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}


