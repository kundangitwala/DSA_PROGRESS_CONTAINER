class Solution {
public:
    bool check(string temper)
    {
        unordered_map<char,int> mp;
        for(char &ch : temper)
        {
            mp[ch]++;
        }
        for(auto it : mp)
        {
            if(it.second > 1) return false;
        }
        return true;
    }
    int countGoodSubstrings(string s) {
        string temp="";
        int left=0;
        int n=s.length();
        int cnt=0;
        for(int right=0; right<n; right++)
        {
            temp.push_back(s[right]);
            if(right-left+1 == 3)
            {
                if(check(temp))
                {
                    cnt++;
                    temp.erase(temp.begin());
                    left++;
                }
                else{
                    temp.erase(temp.begin());
                    left++;
                }
            }
        }
        return cnt;
    }
};