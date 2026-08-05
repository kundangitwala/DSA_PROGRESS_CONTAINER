class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current_sum=0;
        int maxi=nums[0];
        for(int i=0; i<nums.size(); i++){
            current_sum=current_sum+nums[i];
            maxi=max(maxi,current_sum);
            if(current_sum<0)
            {
                current_sum=0;
            }
        }
        return maxi;
    }
};