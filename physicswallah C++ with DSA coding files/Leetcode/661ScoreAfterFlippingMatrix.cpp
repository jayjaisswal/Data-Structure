// class Solution {
// public:
//     int matrixScore(vector<vector<int>>& grid)
//     {
//         int rows = grid.size();
//         int column = grid[0].size();
//         for(int i = 0;i<rows;i++)
//         {
//              if(grid[i][0]==0)
//             {
//             for(int j =0;j<column;j++)
//             {

//                 if(grid[i][j]==0)
//                 {
//                     grid[i][j] = 1;
//                 }
//                 else{
//                     grid[i][j] = 0;
//                 }

//             }
//             }
//         }

//         for(int j =0;j<column;j++)
//         {
//             int count1 = 0;
//             int count0 = 0;
//             for(int i =0;i< rows;i++)
//             {
//                 if(grid[i][j]==1) count1++;
//                 else count0++;
//             }

//             if(count1<count0)
//             {

//                 for(int i =0;i< rows;i++)
//                 {
//                     if(grid[i][j]==0)
//                     {
//                         grid[i][j] = 1;
//                     }
//                     else
//                     {
//                         grid[i][j] = 0;
//                     }
//                 }

//             }
//         }

//        int sum = 0;

//        for(int i = 0;i<rows;i++)
//         {
//              int x = 1;
//             for(int j =column - 1;j>=0;j--)
//             {
//                 sum = sum + grid[i][j] * x;
//                 x = x * 2;

//             }

//         }

//         return sum;

//     }
// }