class Solution {
public:
    bool solve(int i, int j, string s)
    {
        string temp;
        for(int k=i; k<=j; k++)
        {
            temp+=s[k];
        }
        unordered_map<char,int> mpp;
        for(auto it : temp)
        {
            mpp[it]++;
        }
        for(auto it : mpp)
        {
            if(it.second>2) return false;
        }
        return true;
    }
    int maximumLengthSubstring(string s) {
        int n=s.length();
        int maxi=0;
        for(int i=0; i<n; i++)
        {
            for(int j=i; j<n; j++)
            {
                if(solve(i,j,s))
                {
                    maxi=max(maxi,j-i+1);
                }
            }
        }
        return maxi;
    }
};