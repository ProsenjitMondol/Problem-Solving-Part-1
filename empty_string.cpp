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
    string s;
    cin>>s;
    int l=s.length();
    int b=0,a=0;
    for (int i = 0; i <l; i++)
    {
        if (s[i]=='a')
        {
            a++;
        }
        else
        b++;
    }
    if (a==b)
    {
        cout<<"YES"<<'\n';
    }
    else
    {
        cout<<"NO"<<'\n';
    }
    
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