class Solution {
public:
    int minSetSize(vector<int>& arr) {

        int n = arr.size();

        unordered_map<int, int> mpp;

        // Frequency count
        for (int num : arr) {
            mpp[num]++;
        }

        // Store frequencies
        vector<int> freq;

        for (auto it : mpp) {
            freq.push_back(it.second);
        }

        // Largest frequency first
        sort(freq.rbegin(), freq.rend());

        int removed = 0;
        int step = 0;

        for (int f : freq) {

            removed += f;
            step++;

            if (removed >= n / 2) {
                break;
            }
        }

        return step;
    }
};