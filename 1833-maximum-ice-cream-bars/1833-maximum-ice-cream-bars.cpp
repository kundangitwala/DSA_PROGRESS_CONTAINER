class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int n=costs.size();
        int cnt=0;
        for(int num : costs)
        {
            if(num>coins) return cnt;

            int result=coins-num;
            if(result>=0){
                cnt++;
            }
            coins=coins-num;
        }

        return cnt;
    }
};