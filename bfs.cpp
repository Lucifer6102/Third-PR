#include <bits/stdc++.h>
#define ll long long int
#define N 1000
#define M 1000000007
#define f(i, a, b) for (ll i = (ll)a; i <= (ll)b; i++)
#define rf(i, a, b) for (ll i = (ll)a; i >= (ll)b; i--)
#define po pop_back
#define pb push_back
#define lb lower_bound
#define fi first
#define se second
#define mp make_pair
#define bs binary_search
#define debug(x) cout << #x << " = " << x << endl
#define ub upper_bound
#define ibs ios_base::sync_with_stdio(false)
#define cti cin.tie(0)
#define all(x) x.begin(), x.end()
#define PI 3.14159265
#define cot cout.tie(0)
using namespace std;
/**
  * @author :: Rishabh
  *
  */
void bfs(vector<int> g[], int s) {
    queue<int>q;
    map<int,bool>m;
    q.push(s);
    m[s]=true;
    while(!q.empty())
    {
        int t=q.front();
        q.pop();
        cout<<t<<" ";
        for(auto x:g[t])
        {
            if(m[x]==false)
            {
                q.push(x);
                m[x]=true;
            }
        }
    }
}

int main()
{
    ibs;
    cti;
    int t;
    cin>>t;
    while(t--)
    {
        int v,e;
        cin>>v>>e;
        vector<int>adj[v];
        for(int i=0;i<e;i++)
        {
            int v1,v2;
            cin>>v1>>v2;
            adj[v1].pb(v2);
            adj[v2].pb(v1);
        }
        bfs(adj,0);
    }
    return 0;
}