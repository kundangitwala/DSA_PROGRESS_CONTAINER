class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n = digits.size();
        vector<bool> visited(1000, false);

        int cnt = 0;

        for(int i = 0; i < n; i++)
        {
            // 3-digit number cannot start with 0
            if(digits[i] == 0)
                continue;

            for(int j = 0; j < n; j++)
            {
                if(j == i)
                    continue;

                for(int k = 0; k < n; k++)
                {
                    if(k == i || k == j)
                        continue;

                    // Last digit must be even
                    if(digits[k] % 2 != 0)
                        continue;

                    int num = digits[i] * 100 
                            + digits[j] * 10 
                            + digits[k];

                    if(!visited[num])
                    {
                        visited[num] = true;
                        cnt++;
                    }
                }
            }
        }

        return cnt;
    }
};