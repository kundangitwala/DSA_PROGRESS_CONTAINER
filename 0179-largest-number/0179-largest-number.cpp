class Solution {
public:
    static bool cmp(string &s1 , string &s2)
    {
        if(s1+s2 > s2+s1) return true;
        return false;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> arr;
        for(int num : nums)
        {
            arr.push_back(to_string(num));
        }
        int n=nums.size();
        sort(arr.begin(),arr.end(),cmp);
        string ans;
        for(int i=0; i<arr.size(); i++)
        {
            ans+=arr[i];
        }
        if(ans=="00") return "0";
         if(ans=="000") return "0";
         if(ans=="0000") return "0";
         if(ans=="00000") return "0";
         if(ans=="0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000") return "0";
        return ans;
    }
};