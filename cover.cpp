#include<bits/stdc++.h>
#define vi vector<int>v
#define pi pair<int,int>
using namespace std;
using ll=long long ;

void solve(void)
{
    int sum=0,c=0,n;
    cin>>n;
    string s;
    cin>>s;
    for (int i = 0; i <n; i++)
    {
        if(s[i]=='.')
        {
            if(s[i]=='.'&&s[i+1]=='.'&&s[i+2]=='.')
            {
              c=1;
            }
            sum++;
        }
    }
    if(c==1)
    cout<<2<<'\n';
    else
    cout<<sum<<'\n';
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t;
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}