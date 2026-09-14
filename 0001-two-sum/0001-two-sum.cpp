class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp1;
        for(int i=0; i<nums.size(); i++)
        {
            int need=target-nums[i];
            if(mp1.find(need) != mp1.end())
            {
                return {mp1[need],i};
            }
            mp1[nums[i]]=i;
        }
        return {};
    }
};