class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,bool> mpp;
        for(int num : nums)
        {
            if(mpp.find(num) != mpp.end())
            {
                return true;
            }
            mpp[num]=true;
        }
        return false;
    }
};