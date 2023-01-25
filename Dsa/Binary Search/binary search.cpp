class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int n = nums.size();
        int start = 0, end=n-1;
        int mid;

        while(start<=end)
        {
            mid = start+(end-start)/2;
            if(nums[mid]==target) return mid;
            else if(target>nums[mid]) start= mid+1;
            else end=mid-1;
        }
        if(target<nums[mid]) return mid;
    return mid+1;
    }
};
