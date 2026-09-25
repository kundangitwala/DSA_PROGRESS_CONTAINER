class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i = 0;
        int j = s.length() - 1;

        while (i < j) {

            // left character letter nahi hai
            if (!isalpha(s[i])) {
                i++;
            }

            // right character letter nahi hai
            else if (!isalpha(s[j])) {
                j--;
            }

            // dono letters hain -> swap
            else {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }

        return s;
    }
};