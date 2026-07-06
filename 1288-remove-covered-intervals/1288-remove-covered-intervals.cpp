class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        int total = n;
        sort(intervals.begin(), intervals.end());
       
        int c, d;
        for (int i = 0; i < n; i++) {
            c = intervals[i][0];
            d = intervals[i][1];
            bool covered=false;
            for (int j = 0; j < n; j++) {
                if (i != j) {
                    int a = intervals[j][0];
                    int b = intervals[j][1];
                    if (c >= a && b >= d) {
                        covered=true;
                        break;
                    }
                }
            }
            if(covered) total--;
        }
        return total;
    }
};