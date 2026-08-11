class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n=nums.size();
        set<int> st(nums.begin(),nums.end());
        int seqsum=nums[0];
        for(int i=1; i<n; i++)
        {
            if(nums[i]==nums[i-1]+1)
            {
                seqsum+=nums[i];
            }
            else{
                break;
            }
        }
        while(st.find(seqsum) != st.end())
        {
            seqsum++;
        }
        return seqsum;
    }
};