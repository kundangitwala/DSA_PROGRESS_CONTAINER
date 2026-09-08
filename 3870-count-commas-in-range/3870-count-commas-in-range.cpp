class Solution {
public:
    int countCommas(int n) {
        string temp=to_string(n);
        if(temp.length()<4)
        {
            return 0;
        }
        // 1,000 1,001 1,002 count the no of commas
        int cnt=0;
        for(int i=1000; i<=n; i++)
            {
                cnt++;
            }
        return cnt;
    }
};