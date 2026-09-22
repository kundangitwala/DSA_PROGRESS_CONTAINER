class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi=INT_MIN;
        int left=0;
        int right=height.size()-1;
        while(left<right)
        {
            int width=right-left;
            int hight=min(height[left],height[right]);
            
            int currwater=hight*width;
            maxi=max(currwater,maxi);
            if(height[left]<height[right])
            {
                left++;
            }
            else{
                right--;
            }
        }
        return maxi;
    }
};