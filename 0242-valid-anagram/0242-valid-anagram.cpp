class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        if(s.length() != t.length()) return false;
        for(char ch : s)
        {
            mp1[ch]++;
        }
        for(char ch : t)
        {
            mp2[ch]++;
        }
        for(int i=0; i<s.length(); i++)
        {
            if(mp1[s[i]] != mp2[s[i]]) return false;
        }
        return true;
    }
};