class Solution {
public:
    bool solve(unordered_map<int,int> mpp, int k)
    {
        for(auto it : mpp)
        {
            if(it.second>k) return false;
        }
        return true;
    }
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        int maxi=0;
        unordered_map<int,int> mpp;
        // for(int i=0;i<n;i++)
        // {
        //     unordered_map<int,int> mpp;
        //     for(int j=i;j<n;j++)
        //     {
        //         mpp[nums[j]]++;
        //         if(solve(mpp,k))
        //         {
        //             maxi=max(maxi,j-i+1);
        //         }
        //     }
        // }

        // sliding window approach kaam karegi yaha
        int left=0;
        for(int right=0; right<n; right++)
        {
            mpp[nums[right]]++;
            // shrink karni h window
            while(mpp[nums[right]] > k)
            {
                // frequency kam krni h 
                // left pointer increase karna h
                mpp[nums[left]]--;
                left++;
            }

            



            // expand karni h window
            maxi=max(maxi,right-left+1);
        }
        return maxi;
    }
};