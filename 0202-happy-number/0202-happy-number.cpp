class Solution {
public:
    int solve(int number)
    {
        int sumi=0;
        while(number!=0)
        {
            int digit=number%10;
            sumi+=digit*digit;
            number=number/10;
        }
        return sumi;
    }
    bool isHappy(int n) {
        int number = n;
        set<int> st;
        while(number!=1)
        {
            if(st.find(number) != st.end())
            {
                return false;
            }
            st.insert(number);
            int replace=solve(number);
            number=replace;
        }
        return true;
    }
};