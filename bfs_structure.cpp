//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------
const int N=1e5+10;
vector<int>g[N];
int vis[N];
int level[N];


void bfs(int source){
    queue<int>q;
    q.push(source);
    vis[source]=1;
    while (!q.empty())
    {
        int cur=q.front();
        q.pop();
        cout<<cur<<" ";
        for (int child : g[cur])
        {
            if(!vis[child]){
                q.push(child);
                vis[child]=1;
                level[child]=level[cur]+  ;
            }
        }
        
    }
    cout<<'\n';
}

//------------------------------------------------------------------------------
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
for (int i = 0; i < n-1; i++)
{
    int a,b;
    cin>>a>>b;
    g[a].push_back(b);
    g[b].push_back(a);
}
bfs(1);
for (int i = 1; i <=n; i++)
{
    cout<<i<<": "<<level[i]<<'\n';
}

return 0;
}