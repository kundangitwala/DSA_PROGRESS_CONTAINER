class Solution {
public:
    int n,m;
    int t[1001][1001];
    int solve(int i,int j,string &s1,string &s2)
    {
        if(i>=n || j>=m) return 0;
        if(t[i][j] != -1)
        {
            return t[i][j];
        }
        if(s1[i]==s2[j])
        {
            return t[i][j]=1+solve(i+1,j+1,s1,s2);
        }
        else{
            return t[i][j]= max(solve(i+1,j,s1,s2),solve(i,j+1,s1,s2));
        }
    }
    int longestCommonSubsequence(string text1, string text2) {
    n=text1.length();
    m=text2.length();
    memset(t,-1,sizeof(t));
    return solve(0,0,text1,text2);
    }
};