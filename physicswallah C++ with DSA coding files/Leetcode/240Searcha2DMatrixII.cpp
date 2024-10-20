// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int rows =  matrix.size();
//         int cols = matrix[0].size();
//         int i = 0;
//         int j = cols-1;
//         while(i< rows && j>=0){
//             if(target == matrix[i][j]) return true;
//             else if(target < matrix[i][j]) j--;
//             else i++;
//         }
//         return false;
//     }
// };