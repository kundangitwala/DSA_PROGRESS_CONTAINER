class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // set<vector<int>> uniqueTriplets; // Use a set to store unique triplets
        // vector<vector<int>> ans;

        // sort(nums.begin(), nums.end()); // Sort the array to simplify duplicate checks

        // for (int i = 0; i < nums.size(); i++) {
        //     for (int j = i + 1; j < nums.size(); j++) {
        //         for (int k = j + 1; k < nums.size(); k++) {
        //             if (nums[i] + nums[j] + nums[k] == 0) {
        //                 uniqueTriplets.insert({nums[i], nums[j], nums[k]});
        //             }
        //         }
        //     }
        // }

        // // Convert the set to a vector
        // for (auto triplet : uniqueTriplets) {
        //     ans.push_back(triplet);
        // }

        // return ans;


        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0; i<nums.size(); i++)
        {
            // check duplicate of first element if it is continue;

            if(i>0 && nums[i]==nums[i-1]) continue;

            int j=i+1;
            int k=nums.size()-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0)
                {
                    ans.push_back({nums[i],nums[j],nums[k]});
                    // check duplicate from side of j

                    while(j<k && nums[j]==nums[j+1]) j++;
                    while(j<k && nums[k]==nums[k-1]) k--;
                    j++;
                    k--;
                }
                else if(sum<0)
                {
                    j++;
                }
                else{
                    k--;
                }
            }
        }

        return ans;
    }
};