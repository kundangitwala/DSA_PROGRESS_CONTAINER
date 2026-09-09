class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()==0) return;
        k=k%nums.size();
        if(k==0) return;
        ::rotate(nums.begin(),nums.end()-k,nums.end());
    }
};