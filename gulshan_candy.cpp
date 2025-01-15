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
    ll n;
    cin>>n;
    map<int,int>mp;
    for (int i = 0; i <n; i++)
    {
       int x;
       cin>>x;
       mp[x]++;
    }
    ll f=0,ans=0;
    for (int i = 1; i <=1e4+9; i++)
    {
        f=mp[i]+mp[i+1];
        ans=max(ans,f);
    }
    
    cout<<ans<<'\n';
}


//------------------------------------------------------------------------------
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t=1;
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}