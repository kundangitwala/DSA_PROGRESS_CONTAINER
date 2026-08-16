class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        unordered_map<int,int> mpp;
        int n=arr1.size();
        int m=arr2.size();
        for(int i=0; i<n; i++)
        {
            mpp[arr1[i]]++;
        }
        for(int i=0;i<m; i++)
        {
            while( mpp[arr2[i]] > 0 )
            {
                ans.push_back(arr2[i]);
                mpp[arr2[i]]--;
            }
        }
        vector<int> temp;
        for(int i=0;i<n;i++)
        {
            bool flag=true;
            for(int j=0;j<m;j++)
            {
                if(arr1[i] == arr2[j])
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
            {
                temp.push_back(arr1[i]);
            }
        }
        sort(temp.begin(),temp.end());
        for(int t : temp)
        {
            ans.push_back(t);
        }
        return ans;
    }
};