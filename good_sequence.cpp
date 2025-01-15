//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    ll c=0,n;
    cin>>n;
    map<ll,ll>mp;
    for (int i = 0; i <n; i++)
    {
        ll x;
        cin>>x;
        mp[x]++;
    }
    for(auto&x:mp)
    {
        if (x.first<x.second)
        {
            c+=(x.second-x.first);
        }
        if (x.first>x.second)
        {
            c+=x.second;
        }
    }
    cout<<c<<'\n';
}


//------------------------------------------------------------------------------
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t=1;
 //cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}