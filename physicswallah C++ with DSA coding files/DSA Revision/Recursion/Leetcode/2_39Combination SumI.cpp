// class Solution {
//     public:
//     void combinationSum(vector<int>& candidates, int n, int target, int idx, vector<int> v,vector<vector<int>>& ans){
//         if(target == 0){
//             ans.push_back(v);
//             return;
             
//         }
//         if(target<0) return;
//         for(int i=idx;i<n;i++){
//             v.push_back(candidates[i]);
//             combinationSum(candidates, n, target-candidates[i], i, v,ans );
//             v.pop_back();
//         }
    
        
    
//     }
    
//         vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
            
//             vector<vector<int>> ans;
           
//             vector<int> v;
//             int n = candidates.size();
//             combinationSum(candidates,  n,  target, 0, v, ans);
//             return ans;
    
//         }
//     };