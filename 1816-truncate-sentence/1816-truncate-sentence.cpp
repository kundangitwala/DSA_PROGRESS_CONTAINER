class Solution {
public:
    string truncateSentence(string s, int k) {
        int n=s.length();
        string temp="";
        vector<string> arr;
        for(int i=0; i<n; i++)
        {
            if(s[i]==' ')
            {
                arr.push_back(temp);
                temp="";
            }
            else{
                temp+=s[i];
            }
        }
        arr.push_back(temp);
        string ans="";
        for(int i =0;i<k; i++)
        {
            ans+=" "+arr[i];
        }
        return ans.substr(1);
    }
};