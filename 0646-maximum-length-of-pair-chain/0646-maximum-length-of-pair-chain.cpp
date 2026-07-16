class Solution {
public:
    static bool cmp(vector<int> &a,vector<int> &b)
    {
        return a[1] < b[1];
    }
    int findLongestChain(vector<vector<int>>& pairs) {

        // Sort by second element (right value)
        sort(pairs.begin(), pairs.end(),cmp);

        int maxl = 1;
        int prev = pairs[0][1];

        for (int i = 1; i < pairs.size(); i++) {
            if (prev < pairs[i][0]) {
                maxl++;
                prev = pairs[i][1];
            }
        }
        return maxl;
    }
};
