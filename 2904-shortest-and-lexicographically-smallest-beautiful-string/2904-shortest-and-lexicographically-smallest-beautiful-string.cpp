class Solution {
public:
    bool solve(int i , int j , string s , int p)
    {
        int cnt=0;
        for(int k=i; k<=j; k++)
        {
            if(s[k] == '1')
            {
                cnt++;
            }
        }
        if(cnt==p) return true;
        return false;


    }
    string construct(int i, int j, string s)
    {
        string temp;
        for(int k=i; k<=j; k++)
        {
            temp+=s[k];
        }
        return temp;
    }
    string shortestBeautifulSubstring(string s, int k) {
        // STEP 1 FIND ALL THE SUBSTRING OF S
        // STEP 2 CONSIDER ONLY THE SUBSTRING WHICH CONSIST NO OF 1 EQUAL TO K IN THAT SUBSTRING
        // STEP 3 TAKE ONLY WHICH IS SMALLER IN TERMS OF LEXICOGRAPHICALLY 
        // STEP 4 RETURN THAT SUBSTRING
        int one=0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] == '1') one++;

        }
        if(one<k) return "";
        string mini=string(100,'1');
        int n=s.length();
        for(int i=0; i<n; i++)
        {
            for(int j=i; j<n; j++)
            {
                if(solve(i,j,s,k))
                {
                    string lele=construct(i,j,s);
                     // First priority = shortest
                    if(lele.length() < mini.length())
                    {
                        mini = lele;
                    }

                    // Second priority = lexicographically smaller
                    else if(lele.length() == mini.length())
                    {
                        mini = min(mini, lele);
                    }

                }
            }
        }
        return mini;
    }
};