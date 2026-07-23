class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        // BRUTE FORCE TECHNIQUE
        // set<int> st;
        // int n=nums.size();
        // for(int i=0;i<n; i++)
        // {
        //     for(int j=i;j<n;j++)
        //     {
        //         for(int k=j; k<n; k++)
        //         {
        //             int xo=nums[i] ^ nums[j] ^ nums[k];
        //             st.insert(xo);
        //         }
        //     }
        // }
        // return st.size();

        // OPTIMAL TECHNIQUE

        int n = nums.size();

        if (n <= 2)
            return n;

        int mask = 0;
        for (int num : nums) {
            mask = mask |  num;
        }

        return mask + 1;
    }
};