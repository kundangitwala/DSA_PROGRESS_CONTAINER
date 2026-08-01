class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int oddindex=0;
        int evenindex=0;
        for(int i=0;i<n; i++)
        {
            if(i%2==0)
            {
                // even index elements
                evenindex+=nums[i];

            }
            else{
                oddindex+=nums[i];
            }
        }
        return evenindex-oddindex;
    }
};