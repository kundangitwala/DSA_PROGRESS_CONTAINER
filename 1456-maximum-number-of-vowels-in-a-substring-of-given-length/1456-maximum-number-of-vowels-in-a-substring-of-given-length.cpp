// class Solution {
// public:
//     int solve(string & temp)
//     {
//         int cnt=0;
//         for(char &ch : temp)
//         {
//             if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
//             {
//                 cnt++;
//             }
//         }
//         return cnt;
//     }
//     int maxVowels(string s, int k) {
//         int n=s.length();
//         int left=0;
//         int right;
//         string temp;
//         int maximum=0;
//         for(right=0; right<n; right++)
//         {
//             temp+=s[right];
//             if(right-left+1 == k)
//             {
//                 int ans=solve(temp);
//                 maximum=max(ans,maximum);
//                 temp.erase(temp.begin());
//                 left++;
//             }

//         }
//         return maximum;
//     }
// };


class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.length();
        int left = 0;
        int count = 0;
        int maximum = 0;

        for (int right = 0; right < n; right++) {

            // Add new character
            if (s[right] == 'a' || s[right] == 'e' ||
                s[right] == 'i' || s[right] == 'o' ||
                s[right] == 'u') {
                count++;
            }

            // Window size becomes k
            if (right - left + 1 == k) {

                maximum = max(maximum, count);

                // Remove left character
                if (s[left] == 'a' || s[left] == 'e' ||
                    s[left] == 'i' || s[left] == 'o' ||
                    s[left] == 'u') {
                    count--;
                }

                left++;
            }
        }

        return maximum;
    }
};