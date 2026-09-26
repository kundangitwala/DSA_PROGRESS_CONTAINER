class Solution {
public:
    int characterReplacement(string s, int k) {

        int left = 0;
        unordered_map<char, int> freq;

        int maxfreq = 0;
        int maxi = 0;

        for (int right = 0; right < s.length(); right++) {

            // Frequency of current character
            freq[s[right]]++;

            // Maximum frequency inside current window
            maxfreq = max(maxfreq, freq[s[right]]);

            int windowlength = right - left + 1;

            // Characters that need to be replaced
            if (windowlength - maxfreq > k) {
                freq[s[left]]--;
                left++;
            }

            windowlength = right - left + 1;

            maxi = max(maxi, windowlength);
        }

        return maxi;
    }
};