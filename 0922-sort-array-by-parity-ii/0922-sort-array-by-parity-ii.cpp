class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        int n=nums.size();
        int ev=0;
        int od=1;
        for(int i=0;i<n; i++)
        {
            if(nums[i] % 2 == 0)
            {
                ans[ev] = nums[i];
                ev=ev+2;
            }
            else{
                ans[od] = nums[i];
                od=od+2;
            }
        }
        return ans;
    }
};