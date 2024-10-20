class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size = nums.size();
        int low = 0;
        int high = size - 1;
        while(high>=low){
            // int mid = (low + high)/2;
            int mid = low + (high-low)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid]>target) high = mid-1;
            else if(nums[mid]<target) low=mid+1;
        }
        return -1;
        
    }
};