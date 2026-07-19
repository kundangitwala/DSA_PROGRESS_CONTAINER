class Solution {
public:
    string smallestSubsequence(string s) {
        int n=s.length();
        stack<char> st;
        unordered_map<char,int> lastIndex;
        unordered_map<char,bool> seen;
        for(int i=0;i<n; i++)
        {
            lastIndex[s[i]] = i;
        }
        for(int i=0;i<n; i++)
        {
            if(seen[s[i]]) continue;
            while(!st.empty() && st.top() > s[i] && lastIndex[st.top()] > i)
            {
                seen[st.top()]=false;
                st.pop();
                
            }
            st.push(s[i]);
            seen[s[i]] = true;
        }
        string ans="";
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};