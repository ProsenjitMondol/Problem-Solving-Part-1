//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;
ll mod = 10e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    int k=1,n;
    cin>>n;

    vector<int>v,vv;
    for(int i=0;i<n;i++)
    {
        int o;
        cin>>o;
        v.push_back(o);
    }
    for (int i = 0; i < n; i++)
    {
        k=1;
        for (int j= 0;j<n;j++)
        {
            if (v[i]<v[j])
            {
                k++;
            }
            
        }
        cout<<k<<" ";
    }
    
    cout<<'\n';
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