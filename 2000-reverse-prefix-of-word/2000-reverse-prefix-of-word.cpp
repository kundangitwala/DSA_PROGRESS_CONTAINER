class Solution {
public:
    string reversePrefix(string word, char ch) {

        // edge condition
        if(word.find(ch) == string::npos)
        {
            return word;
        }
        int k=0;
        for(int i=0; i<word.length(); i++)
        {
            if(word[i]==ch)
            {
                k=i;
                break;
            }
        }
        string st;
        for(int i=k; i>=0; i--)
        {
            st+=word[i];
        }
        for(int i=k+1; i<word.length(); i++)
        {
            st+=word[i];
        }
        return st;

    }
};