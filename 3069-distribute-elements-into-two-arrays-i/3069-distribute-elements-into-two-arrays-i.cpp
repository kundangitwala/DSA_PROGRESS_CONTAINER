class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n=nums.size();
        // step 1) create array1 and array2 then assign those values to both arrays
        // step 2) after constructing both arrays compare last value of both array if array1 last value is greater than array2 last value append in array1
        // step 3) make result array and concat both array return
        vector<int> arr1(50);
        vector<int> arr2(50);
        int n1=0;
        int n2=0;
        arr1[n1] = nums[0];
        n1++;
        arr2[n2] = nums[1];
        n2++;
        for(int i=2; i<n; i++)
        {
            if(arr1[n1-1] > arr2[n2-1])
            {
                arr1[n1++] = nums[i];
            }
            else{
                arr2[n2++] =  nums[i];
            }
        }

       
        vector<int> result;
        for(int i=0; i<arr1.size(); i++)
        {
            if(arr1[i] != 0)
            result.push_back(arr1[i]);
        }
        for(int i=0; i<arr2.size(); i++)
        {
            if(arr2[i] != 0)
            result.push_back(arr2[i]);
        }
        return result;
    }
};