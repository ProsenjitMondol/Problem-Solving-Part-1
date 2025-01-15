// Author  :  PROSENJIT MONDOL

#include <bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll = long long;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    int cnt,st, n;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll o;
        cin >> o;
        v.push_back(o);
    }
    sort(v.begin(), v.end());
    int m=(n+1)/2-1;
    int r=count(v.begin()+m,v.end(),v[m]);
    cout<<r<<'\n';
    
}

//------------------------------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}