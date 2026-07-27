class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int row=accounts.size();
        int maxi=-1;
        for(int i=0; i<row; i++)
        {
            int sumi=accumulate(accounts[i].begin(),accounts[i].end(),0);
            maxi=max(maxi,sumi);
        }
        return maxi;
    }
};