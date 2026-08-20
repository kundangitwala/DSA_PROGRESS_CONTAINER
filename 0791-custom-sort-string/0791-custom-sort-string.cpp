class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> mpp;
        for(char ch : s)
        {
            mpp[ch]++;
        }
        string ans;
        for(int i=0;i<order.length(); i++)
        {
           while( mpp[order[i]] > 0 )
           {
            ans+=order[i];
            mpp[order[i]]--;
           }
        }
        for(auto it : mpp)
        {
            while(it.second > 0)
            {
                ans+=it.first;
                it.second--;
            }
        }
        return ans;
    }
};