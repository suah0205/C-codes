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

    ll t,n,i,j,v,f,g;
    cin>>t;
    W(t--)
    {
        vector<vii> a;
        fn(i,3)
        {
            vii temp;
            fn(j,3)
            {
                cin>>v;
                temp.pb(v);
            }
            a.pb(temp);
        }
        sort(a.begin(),a.end());
        //2nd and 3rd
        if((a[0][0]<a[1][0] && a[0][1]<=a[1][1] && a[0][2]<=a[1][2]) || (a[0][0]<=a[1][0] && a[0][1]<a[1][1] && a[0][2]<=a[1][2]) || (a[0][0]<=a[1][0] && a[0][1]<=a[1][1] && a[0][2]<a[1][2]))
            f=1;
        else
            f=0;
        //1st and 2nd
        if((a[1][0]<a[2][0] && a[1][1]<=a[2][1] && a[1][2]<=a[2][2]) || (a[1][0]<=a[2][0] && a[1][1]<a[2][1] && a[1][2]<=a[2][2]) || (a[1][0]<=a[2][0] && a[1][1]<=a[2][1] && a[1][2]<a[2][2]))
            g=1;
        else
            g=0;
        (f==1 && g==1)?cout<<"yes\n":cout<<"no\n";
    }
    return 0;
}


