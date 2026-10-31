#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        int V = points.size();
        vector<bool>mst(V,false);
        int src = 0;
        pq.push({0,src});
        int ans = 0;
        while(!pq.empty()){
            int u = pq.top().second;
            int cost = pq.top().first;
            pq.pop();

            if(!mst[u]){ 
                mst[u] = true;
                ans += cost;

                for (int i = 0; i < V; i++)
                {
                    if(u != i){
                        int wt = abs(points[u][0] - points[i][0]) + abs(points[u][1] - points[i][1]);
                        pq.push({wt,i});
                    }
                }
            }
        }
        return ans;
    }
};