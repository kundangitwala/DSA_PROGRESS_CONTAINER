class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int n=s.length();
        int i=0;
        int maxi=0;
        for(int j=0; j<n; j++)
        {
            // shrink window when condition is false
            while(st.find(s[j]) != st.end())
            {
                st.erase(s[i]);
                i++;
            }
            // expand window when condition is true
            st.insert(s[j]);
            maxi=max(maxi,j-i+1);
        }
        return maxi;
    }
};