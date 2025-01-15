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
    int n,x;
    cin>>n>>x;
    vector<int>v;
    v.push_back(0);
    for(int i=1;i<=n;i++)
    {
        int o;
        cin>>o;
        v.push_back(o);
    }
    if (n==1)
    {
        cout<<max(v[1],2*(x-v[1]))<<'\n';
        return;
    }
    
    int ma=0;
    for (int i = 1; i <=n; i++)
    {
        ma=max(ma,(v[i]-v[i-1]));
    }
    ma=max(ma,2*(x-v[n]));
    cout<<ma<<'\n';
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