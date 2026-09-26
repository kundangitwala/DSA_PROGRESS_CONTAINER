class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        int n=s.length();
        unordered_map<string,string> mpp;
        for(auto it : knowledge)
        {
            mpp[it[0]]=it[1];
        }
        string result;
        for(int i=0; i<n; i++)
        {
            if(isalpha(s[i]))
            {
                result+=s[i];
            }
            else{
                i++;
                string temp;
                while(s[i]!=')')
                {
                    temp+=s[i];
                    i++;
                }
                result+=(mpp.count(temp) ? mpp[temp] : "?");
            }
            
        }
        return result;
    }
};