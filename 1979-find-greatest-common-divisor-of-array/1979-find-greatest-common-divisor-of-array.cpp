class Solution {
public:
    int gcd(int a, int b)
    {
        if(b==0) return a;
        return gcd(b,a%b);
    }
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        sort(begin(nums),end(nums));
        int mini=nums[0];
        int maxi=nums[n-1];
        return gcd(mini,maxi);
    }
};