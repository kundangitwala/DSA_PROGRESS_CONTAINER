class Solution {
public:
    long long solve(vector<int> &piles,int mid)
    {
        long long sumi=0;
        for(int i=0; i<piles.size(); i++)
        {
            long long current=ceil((double)piles[i]/mid);
            sumi+=current;
        }
        return sumi;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        // int start=*min_element(piles.begin(),piles.end());
        int start=1;
        int end=*max_element(piles.begin(),piles.end());
        int ans=-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            long long res=solve(piles,mid);
            if(res<=h)
            {
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};