class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        for(int j=0; j<n; j++)
        {
            if(j==0 || j==1 || nums[j]!=nums[i-2])
            {
                nums[i++] = nums[j];
            }
        }
        return i;
    }
};