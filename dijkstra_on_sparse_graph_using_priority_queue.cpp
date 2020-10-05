#include "bits/stdc++.h"
using namespace std;
const int maxn = 100005 , inf = 1e8;

int n,m;
vector<pair<int,int>> adj[maxn];
vector<int> vis(maxn , 0);
vector<int> dis(maxn , inf);

void dijkstra(int start)
{
    
    dis[start] =0;
    priority_queue<pair<int,int> ,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0,start});
    while(!pq.empty())
    {
        int cur = pq.top().second ,d_cur = pq.top().first; 
        pq.pop();
        if(d_cur>dis[cur])
            continue;
        for(auto it:adj[cur])
        {
            int x = it.first , len = it.second;
            if(dis[cur] + len < dis[x])
            {
                dis[x] = dis[cur] + len;
                //  parent[x] = cur;
                pq.push({dis[x],x});
            }
        }
    }
}

signed main()
{
    
    int i;
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        adj[a].push_back({b,c});
    }
    dijkstra(1);
    for(int i= 1; i<=n; i++)
        cout<<dis[i]<<" ";
        
    return 0;
}
