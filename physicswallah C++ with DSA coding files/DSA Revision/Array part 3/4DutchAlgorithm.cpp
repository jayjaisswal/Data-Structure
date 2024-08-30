// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         // int n = nums.size();
//         // int count0 = 0;
//         // int count1 = 0;
//         // int count2 = 0;
//         // //two pass
//         // for(int i=0;i<=n-1;i++){
//         //     if(nums[i] == 0) count0++;
//         //     else if(nums[i] == 1) count1++;
//         //     else count2++;
//         // }
//
//         // for(int i=0;i<=count0-1;i++){
//         //      nums[i] = 0;
//         // }
//         // for(int i=count0;i<=count0+count1-1;i++){
//         //      nums[i] = 1;
//         // }
//         // for(int i=count0+count1;i<=n-1;i++){
//         //      nums[i] = 2;
//         // }
//
//         //or
//         // for(int i=0;i<=n-1;i++){
//         //     if(i<count0) nums[i] = 0;
//         //     else if(i<count0+count1)  nums[i] = 1;
//         //     else nums[i] = 2;
//         // }
//
//         //one pass solution --> Dutch Flag Algorithm
//         int low = 0;
//         int mid = 0;
//         int high = nums.size()-1;
//
//         while(mid<=high){
//             if(nums[mid]==2){
//                 int temp = nums[mid];
//                 nums[mid] = nums[high];
//                 nums[high] = temp;
//                 high--;
//             }
//             else if(nums[mid]==0){
//                 int temp = nums[mid];
//                 nums[mid] = nums[low];
//                 nums[low] = temp;
//                 low++;
//                 mid++;
//             }
//             else mid++;
// 
//         }
// 
// 
// 
//         return;
//     }
// 
// };