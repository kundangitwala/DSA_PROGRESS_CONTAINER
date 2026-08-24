// class Solution {
// public:
//     // bool check(int i,int j,string p,string s)
//     // {
//     //     string temp;
//     //     for(int k=i; k<=j; k++)
//     //     {
//     //         temp+=s[k];
//     //     }
//     //     sort(temp.begin(),temp.end());
//     //     if(temp==p) return true;
//     //     return false;
//     // }
//     bool check(string temp,string p)
//     {
//         sort(temp.begin(),temp.end());
//         if(temp==p) return true;
//         return false;
//     }
//     vector<int> findAnagrams(string s, string p) {
//         int n=s.length();
//         int m=p.length();
//         vector<int> ans;
//         // for(int i=0; i<n; i++)
//         // {
//         //     for(int j=i; j<n; j++)
//         //     {
//         //         if((j-i+1) == m)
//         //         {
//         //             if(check(i,j,p,s))
//         //             {
//         //                 ans.push_back(i);
//         //             }
//         //         }
//         //     }
//         // }
//         int left=0;
//         string temp;
//         for(int right=0; right<n; right++)
//         {
//             temp+=s[right];

//             if((right-left+1) == m)
//             {
//                 if(check(temp,p))
//                 {
//                     ans.push_back(left);
//                     temp.erase(temp.begin());
//                     left++;
//                 }
//                 else{
//                     temp.erase(temp.begin());
//                     left++;
//                 }
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n1 = s.size(), n2 = p.size();
        vector<int> ans;

        if (n1 < n2) return ans;

        vector<int> a(26, 0), b(26, 0);

        for (int i = 0; i < n2; i++) {
            a[p[i] - 'a']++;
            b[s[i] - 'a']++;
        }

        if (a == b) ans.push_back(0);

        for (int i = n2; i < n1; i++) {
            b[s[i] - 'a']++;
            b[s[i - n2] - 'a']--;

            if (a == b) {
                ans.push_back(i - n2 + 1);
            }
        }

        return ans;
    }
};