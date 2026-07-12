class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp = arr;
        sort(temp.begin(), temp.end());
        unordered_map<int, int> mpp;
        int rk = 1;
        //   map will contain its value and rank as key value pair

        for (int n : temp) {
            if (mpp.find(n) == mpp.end()) {
                mpp[n] = rk++;
            }
        }

        vector<int> ans;
        for (int i = 0; i < arr.size(); i++) {
            ans.push_back(mpp[arr[i]]);
        }
        return ans;
    }
};