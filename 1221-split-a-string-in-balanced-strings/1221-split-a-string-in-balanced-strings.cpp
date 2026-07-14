class Solution {
public:
    int balancedStringSplit(string s) {
        int n=s.length();
        int balance=0;

        int split=0;
        for(auto it : s)
        {
            if(it=='R') split++;
            else if(it=='L') split--;
            if(split==0) balance++;
        }
        return balance;
    }
};