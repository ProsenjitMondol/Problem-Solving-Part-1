#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
#define vi vector<int>v
#define pi pair<int,int>
using namespace std;
using ll=long long ;

void solve(void)
{
  ll sum=0,n,m,a,b;
  cin>>n>>m>>a>>b;
  if(m*a>b){
    int r=n/m;
    sum+=(r*b);
    r=n-(r*m);
    if((r*a)<b)
    sum+=(r*a);
    else
    sum+=b;
    cout<<sum<<'\n';
  }
  else
  {
    cout<<(n*a)<<'\n';
  }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t;
  t=1;
  //cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}