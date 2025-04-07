class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) 
    {
        int size = arr.size();
        int low = 1;
        int idx = -1;
        int high = size - 2;
        while(high>=low)
        {
            int mid = low + (high-low)/2;
            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
                idx = mid;
                return idx;
            }
            else if(arr[mid]<arr[mid-1] ) high = mid-1; 
            else low = mid+1;
        }
             return idx;
     }
};