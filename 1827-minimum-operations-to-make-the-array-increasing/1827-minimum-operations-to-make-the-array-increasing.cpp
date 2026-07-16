class Solution {
public:
    int minOperations(vector<int>& nums) {
         int move = 0;
        int n = nums.size();

        for(int i = 0; i < n - 1; i++)
        {
            if(nums[i+1] <= nums[i])
            {
                int diff = nums[i] - nums[i+1] + 1;
                move += diff;
                nums[i+1] +=nums[i] - nums[i+1] + 1;
            }
        }

        return move;
    }
};