// class Solution {
// public:
//     vector<vector<int>> generate(int numRows)
//     {
//         vector< vector<int> > v;

//         for(int i = 1;i<=numRows;i++)
//         {
//             vector <int> v1(i);
//             v.push_back(v1);
//         }

//         for(int i = 0; i<numRows;i++)
//            {
//             for(int j =0;j<=i;j++)
//             {
//                 if(j==0 || j==i)
//                 {
//                     v[i][j] = 1;
//                 }
//                 else
//                 {
//                     v[i][j] = v[i-1][j] + v[i-1][j-1];
//                 }
//             }
//            }

//         return v;

//     }

// }