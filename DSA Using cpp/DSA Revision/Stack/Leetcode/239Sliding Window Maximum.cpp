// class Solution {
//     public:
//         vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//             int n = nums.size();
//             if(n==1) return nums;
//             int size = n - k + 1;
//             vector<int> ngi(n,n);
//             stack<int> sc;
    
//             // brute force
//             // for(int i =0;i<size;i++){
//             //     int maxi = INT_MIN;
//             //     for(int j = i;j<=k-1+i;j++){
                    
//             //         maxi = max(maxi, nums[j]);
//             //     }
//             //     ans.push_back(maxi);
//             // }
    
//             // return ans;

// .....................................................................................
//             // next greater index
//             sc.push(n-1);
//             ngi[n-1] = n;
//             for(int i=n-2;i>=0;i--)
//             {
//                 while(sc.size()>0 && nums[sc.top()]<=nums[i])
//                 {
//                     sc.pop();
    
//                 }
    
//                 if(sc.size()==0) ngi[i] = n;
//                 else ngi[i] = sc.top();
    
//                 sc.push(i);
    
    
//             }
    
    
//             // solution
//             vector<int> ans;
//             int j = 0;
//             for(int i=0;i<n-k+1;i++){
//                 if(j<i) j=i;
//                 int mx = nums[j]; // from starting of window
//                 while(j< i+k){
//                      mx = nums[j];
//                      if(ngi[j]>=i+k) break;
//                      j = ngi[j];
    
//                 }
//                 ans.push_back(mx);
//             }
//             return ans;
    
    
           
    
    
    
    
    
    
//         }
//     };