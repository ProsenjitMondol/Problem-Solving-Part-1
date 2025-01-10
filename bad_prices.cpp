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
    ll v[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll mi=INT_MAX;
    for (int i = n-1; i >=0; i--)
    {
        if (v[i]>mi)
        {
            c++;
        }
        mi=min(mi,v[i]);
    }
    
    cout<<c<<'\n';
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