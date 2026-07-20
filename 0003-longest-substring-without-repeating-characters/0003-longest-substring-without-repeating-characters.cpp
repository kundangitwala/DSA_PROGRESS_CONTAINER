class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int n=s.length();
        int i=0;
        int maxi=0;
        for(int j=0;j<n; j++)
        {

            while(st.find(s[j]) != st.end())
            {
                st.erase(s[i]);
                i++;
            }
            st.insert(s[j]);
            int len=j-i+1;
            maxi=max(maxi,len);

            
        }
        return maxi;
    }
};