// class Solution {
// public:
//     vector<vector<int>> transpose(vector<vector<int>>& matrix) {
//         int rows = matrix.size();
//         int cols = matrix[0].size();
//         vector<vector<int>> transpose(cols, vector<int>(rows)); //transpose[cols][rows]
//         for(int i =0;i<=cols-1;i++){
//             for(int j = 0;j<=rows-1;j++){
//                 transpose[i][j] = matrix[j][i];
//             }
//         }

//         return transpose;
//     }
// };