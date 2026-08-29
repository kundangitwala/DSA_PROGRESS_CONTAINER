class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int n=s.length();
        set<char> st;
        int maxi=0;
        for(int right=0; right<n; right++)
        {
            // window expend
            
            while(st.find(s[right]) != st.end())
            {
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            maxi=max(maxi,right-left+1);

            // window shrink
        }
        return maxi;
    }
};