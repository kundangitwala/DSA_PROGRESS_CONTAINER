class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0;
        int maxi=0;
        int zero=0;
        int n=nums.size();
        for(int j=0; j<n; j++)
        {
            if(nums[j]==0) zero++;
            while(zero>k)
            {
                if(nums[i]==0) zero--;
                i++;
            }
            maxi=max(maxi,j-i+1);
        }
        return maxi;
    }
};