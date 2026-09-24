class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0; i<n; i++)
        {
            int digitsum=0;
            int temp=nums[i];
            while(temp!=0)
            {
                digitsum+=temp%10;
                temp/=10;
            }
            if(digitsum==i)
            {
                return i;
            }
        }
        return -1;
    }
};