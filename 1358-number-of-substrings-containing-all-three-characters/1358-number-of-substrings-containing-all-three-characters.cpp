class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int> mpp;
        int n=s.length();
        int i=0;
        int ans=0;
        for(int j=0;j<n;j++)
        {
            mpp[s[j]]++;
            while(mpp['a']>0 && mpp['b'] >0 && mpp['c'] >0)
            {
                ans+=n-j;
                mpp[s[i]]--;
                i++;
            }
        }
        return ans;
    }
};