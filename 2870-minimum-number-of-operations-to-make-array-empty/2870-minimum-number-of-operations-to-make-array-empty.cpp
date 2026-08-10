class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(auto num : nums)
        {
            mpp[num]++;
        }
        int opr=0;
        for(auto it : mpp)
        {
            if(it.second == 1) return -1;
            opr += ceil((double)it.second / 3);
           
        }
        return opr;
    }
};