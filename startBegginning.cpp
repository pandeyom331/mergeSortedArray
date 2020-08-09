//Approach 2 : Two pointers / Start from the beginning
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //make a copy of nums1
        //create pointer
        int* nums1_copy;
        //append pointer to the start of new array of size m
        nums1_copy = new int [m];
        
        
        System.arraycopy(nums1,0,nums1_copy,0,m);
        
        //two get pinters for nums1_copy and nums2
        
        int p1 = 0;
        int p2 = 0;
        
        //set pointer for nums 1
        int p = 0;
        
        //compare elements from nums_copy1 and nums2
        //add the smallest one into nums1
        while ((p1 < m) && (p2 < n))
            nums1[p++] = (nums2_copy[p1] < nums[p2]) ? nums1_copy[p++] : nums2[p2++];
        
        //if there are still elements to add 
        if(p1 < m)
            System.arraycopy(nums1_copy,nums1, p1 + p2, m + n - p1 - p2);
        if(p2 < n)
            System.arraycopy(nums,p2,nums1,p1 +p2, m + n - p1 - p2);
    }
};
