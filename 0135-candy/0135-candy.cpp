class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        vector<int> lefttoright(n,1);
        vector<int> righttoleft(n,1);

        vector<int> ans(n,0);

        for(int i=0; i<n; i++)
        {
            if(i==0) continue;
            if(ratings[i] > ratings[i-1])
            {
                lefttoright[i] = lefttoright[i-1]+1;
            }
        }

        for(int i=n-1; i>=0; i--)
        {
            if(i==n-1) continue;
            if(ratings[i] > ratings[i+1])
            {
                righttoleft[i] = righttoleft[i+1]+1;
            }
        }

        for(int i=0;i<n; i++)
        {
            ans[i]=max(lefttoright[i],righttoleft[i]);
        }
        int sumiii=accumulate(ans.begin(),ans.end(),0);
        return sumiii;
    }
};