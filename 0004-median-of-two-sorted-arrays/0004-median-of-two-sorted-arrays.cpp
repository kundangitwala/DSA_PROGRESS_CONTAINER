class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arraymania;
        int i = 0;
        int j = 0;
        
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                arraymania.push_back(nums1[i++]);
            } else {
                arraymania.push_back(nums2[j++]);
            }
        }
        while (i < nums1.size()) {
            arraymania.push_back(nums1[i++]);
        }

        while (j < nums2.size()) {
            arraymania.push_back(nums2[j++]);
        }
        int len=arraymania.size();
        if(len%2==0)
        {
            return (arraymania[len/2-1] + arraymania[len/2]) / 2.0 ;
        }
        else{
            return  arraymania[len/2];
        }
    }
};