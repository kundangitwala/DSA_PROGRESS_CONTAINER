class Solution {
public:
    int maxDepth(string s) {
        int curr=0;
        int res=0;
        for(int i=0; i<s.length(); i++)
        {
            char ch=s[i];
            if(ch=='(')
            {
                curr++;
                res=max(curr,res);
            }
            if(ch==')')
            {
                curr--;
                res=max(curr,res);
            }
        }
        return res;
    }
};