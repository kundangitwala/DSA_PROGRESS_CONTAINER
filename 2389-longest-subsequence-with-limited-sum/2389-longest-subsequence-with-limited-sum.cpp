class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());   //sort 

        for (int i = 1; i < nums.size(); i++)
            nums[i] += nums[i - 1]; //prefix sum

        vector<int> ans;
// Use greedy technique to make the local optimal choice (maximising subsequence)

        for (int q : queries) {
            ans.push_back(upper_bound(nums.begin(), nums.end(), q) - nums.begin());  
        }

        return ans;



    }
};