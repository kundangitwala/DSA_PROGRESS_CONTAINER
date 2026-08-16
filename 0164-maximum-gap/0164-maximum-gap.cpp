class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        if(n<2) return 0;
        sort(nums.begin(),nums.end());
        int maxi=INT_MIN;
        for(int i=1; i<n; i++)
        {
            int temp=abs(nums[i]-nums[i-1]);
            maxi=max(maxi,temp);
            
        }
        return maxi;
    }
};