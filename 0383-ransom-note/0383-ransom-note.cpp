class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mpp1;
        unordered_map<char, int> mpp2;
        int n = ransomNote.length();
        int m = magazine.length();
        for (char ch : magazine) {
            mpp1[ch]++;
        }
        for (char ch : ransomNote) {
            mpp2[ch]++;
        }
        for(auto it : mpp2)
        {
            if(mpp2[it.first]>mpp1[it.first])
            {
                return false;
            }
        }
        return true;
    }
};