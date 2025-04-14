// class Solution {
//     public:
//         vector<int> canSeePersonsCount(vector<int>& heights) {
//             stack <int> sc;
//             int n = heights.size();
//             vector<int> ans(n);
//             ans[n-1] = 0;
            
//             sc.push(heights[n-1]);
//             for(int i = n-2;i>=0;i--){
//                 int count = 0;
//                 while(sc.size()>0 && sc.top()<=heights[i]){
//                     sc.pop();
//                     count++;
//                 }
    
               
//                 if(sc.size()==0){
//                     ans[i] = count;
//                 }else{
//                     count++;
//                     ans[i] = count;
//                 }
    
//                 sc.push(heights[i]);
                
                
    
//             }
//             return ans;
//         }
//     };