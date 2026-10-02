class Solution {
public:
    void backtrack(int open, int close, int n, string curr, vector<string>& res) {
        // base case
        if(open == n && close == n) {
            res.push_back(curr);
            return;
        }

        // add '('
        if(open < n) {
            backtrack(open + 1, close, n, curr + '(', res);
        }

        // add ')'
        if(close < open) {
            backtrack(open, close + 1, n, curr + ')', res);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> res;
        backtrack(0, 0, n, "", res);
        return res;
    }
};