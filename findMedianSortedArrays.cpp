class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0;
        int j = 0;
        vector<int> nums;
        
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]>nums2[j]){
               nums.push_back(nums2[j++]);
            }
            else{
                nums.push_back(nums1[i++]);
            }
        }
        while(i<nums1.size()){
            nums.push_back(nums1[i++]);
        }
        while(j<nums2.size()){
            nums.push_back(nums2[j++]);
        }
         int n = nums.size();
        if(nums.size()%2==0){
            return (nums[n/2 - 1] + nums[n/2]) / 2.0;
        }
        else{ 
            return nums[n/2];
        }
    }
};
