#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2,5,7,5,5,5,5,8};

    int size = 8;
    int x = 8;
    bool flag = false;
    int low = 0;
    int high = size - 1;
    while (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
        {
            if (arr[mid] == arr[mid - 1])
                high = mid - 1;
            else
            {
                cout << mid;
                flag = true;
                break;
            }
        }
        else if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
    }
    if (flag == false)
        cout << "Element is not found";
}

// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         int size = nums.size();
//         int low = 0;
//         int low1 = 0;
//         int high = size - 1;
//         int high1 = size - 1;
//         int lidx = -1;
//         int hidx = -1;
//         while(high>=low)
//         {
//             int mid = low + (mid-low)/2;
//             if(nums[mid]==target) 
//             {   lidx = mid; 
//                 high = mid -1 ; 
//             }
//             else if(nums[mid]>target)  high=mid - 1;
//             else low = mid + 1;
        

//         } 


        
//         while(high1>=low1)
//         {
//             int mid1 = low1 + (high1-low1)/2;
//             if(nums[mid1]==target) 
//             {
//                    hidx = mid1;  
//                    low1 = mid1 + 1; 
//             }
                
//             else if(nums[mid1]>target) high1 = mid1 - 1;
//             else low1 = mid1 + 1;

            
//         }
        
       
//      return{lidx, hidx};
        
//     }
// };
