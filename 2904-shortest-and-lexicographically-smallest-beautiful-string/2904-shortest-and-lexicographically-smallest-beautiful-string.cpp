class Solution {
public:

    bool solve(int i, int j, string s, int k)
    {
        int cnt = 0;

        for(int x = i; x <= j; x++)
        {
            if(s[x] == '1')
            {
                cnt++;
            }
        }

        return cnt == k;
    }

    string construct(int i, int j, string s)
    {
        string temp;

        for(int x = i; x <= j; x++)
        {
            temp += s[x];
        }

        return temp;
    }

    string shortestBeautifulSubstring(string s, int k)
    {
        string mini = "";
        int n = s.length();

        for(int i = 0; i < n; i++)
        {
            for(int j = i; j < n; j++)
            {
                if(solve(i, j, s, k))
                {
                    string curr = construct(i, j, s);

                    // First beautiful substring
                    if(mini == "")
                    {
                        mini = curr;
                    }

                    // Shorter substring
                    else if(curr.length() < mini.length())
                    {
                        mini = curr;
                    }

                    // Same length -> lexicographically smaller
                    else if(curr.length() == mini.length())
                    {
                        mini = min(mini, curr);
                    }
                }
            }
        }

        return mini;
    }
};