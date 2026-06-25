class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n; i++)
        {
            unordered_map<int,int> mpp;
            for(int j=i; j<n; j++)
            {
                mpp[nums[j]]++;
                int len=j-i+1;
                if(mpp[target]>len/2)
                {
                    cnt++;
                }
            }
        }
        return cnt;
        // vector<vector<int>> toofan;
        // for(int i=0; i<n; i++)
        // {
        //     vector<int> munna;
        //     for(int j=i; j<n; j++)
        //     {
        //         munna.push_back(nums[j]);
        //         toofan.push_back(munna);
        //     }
            
        // }

        // int cnt=0;
        // for(auto it : toofan)
        // {
        //     unordered_map<int,int> mpp;
        //     int m=it.size();
        //     for(int num : it)
        //     {
        //         mpp[num]++;
        //     }
        //     int ans=0;
        //     for(auto it : mpp)
        //     {
        //         if(it.second> m/2)
        //         {
        //             ans=it.first;
        //             break;
        //         }
        //     }
        //     if(ans==target) cnt++;

        // }
        // return cnt;
    }
};