//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
using ll=unsigned long long ;
ll mod = 10e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    ll c=0,a,b;
    cin>>a>>b;
    ll d=a-b;
    if (a==b)
    {
        cout<<"infinity"<<'\n';
        return;
    }
    if (a<b)
    {
        cout<<0<<'\n';
        return;
    }
    for (int i = 1; i*i<=d; i++)
    {
        if (d%i==0)
        {
            if (i>b)
            {
                c++;
            }
            if(d/i!=i)
            {
                if (d/i>b)
                {
                    c++;
                }
            }
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