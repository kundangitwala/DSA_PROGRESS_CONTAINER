class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> st;
        int n=sentence.length();
        for(int i=0; i<n; i++)
        {
            st.insert(sentence[i]);
        }
        string result;
        for(auto it : st)
        {
            result+=it;
        }
        if(result.length() < 26) return false;
        return true;

    }
};