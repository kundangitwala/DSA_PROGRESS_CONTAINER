class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int m=nums.size();
        int i=0;
        int j=n;
        while(i<n && j<m)
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            i++,j++;
        }
        return ans;
    }
};