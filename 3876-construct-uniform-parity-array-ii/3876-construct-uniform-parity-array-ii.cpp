class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        
        // required variable
        vector<int> ravolqedin = nums1;

        sort(nums1.begin(), nums1.end());

        int smallestOdd = INT_MAX;
        int smallestEven = INT_MAX;

        for (int x : nums1) {
            if (x % 2) smallestOdd = min(smallestOdd, x);
            else smallestEven = min(smallestEven, x);
        }

        // -------------------
        // Try making all EVEN
        // -------------------
        bool makeEven = true;

        for (int x : nums1) {
            if (x % 2 == 1) {
                // need another smaller odd
                if (smallestOdd == x) {
                    makeEven = false;
                    break;
                }
            }
        }

        // -------------------
        // Try making all ODD
        // -------------------
        bool makeOdd = true;

        if (smallestOdd == INT_MAX) {
            makeOdd = false; // no odd exists
        } else {
            for (int x : nums1) {
                if (x % 2 == 0) {
                    // need smaller odd
                    if (smallestOdd >= x) {
                        makeOdd = false;
                        break;
                    }
                }
            }
        }

        return makeEven || makeOdd;
    }
};