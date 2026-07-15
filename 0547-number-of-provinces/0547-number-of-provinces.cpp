class Solution {
public:
    void dfs(int s, int n, vector<vector<int>>& isConnected ,vector<bool>& visited)
    {
        visited[s]=1;
        vector<int> adj;
        for(int i=0;i<n;i++)
        {
            int x=isConnected[s][i];
            if(x==1)
            {
                adj.push_back(i);
            }
        }

        for(auto it : adj)
        {
            if(!visited[it])
            {
                dfs(it,n,isConnected,visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<bool> visited(n,0);
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(!visited[i]) {
                cnt++;
                dfs(i,n,isConnected,visited);
            }
        }
        return cnt;
    }
};