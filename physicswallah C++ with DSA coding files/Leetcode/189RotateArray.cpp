// class Solution {
// public:
//     void rotate(vector<int>& v, int k) {

//         int n = v.size();
//         if(k>n) k = k%n;
//         int i = 0;
//         int j = n-k-1;
//         while(i<=j){
//             int temp = v[i];
//             v[i] = v[j];
//             v[j] = temp;
//             i++;
//             j--;
//         }

//         int p = n-k;
//         int q = n-1;
//         while(p<=q){
//             int temp = v[p];
//             v[p] = v[q];
//             v[q] = temp;
//             p++;
//             q--;
//         }

//         int g = 0;
//         int h = n-1;
//         while(g<=h){
//             int temp = v[g];
//             v[g] = v[h];
//             v[h] = temp;
//             g++;
//             h--;
//         }

//     }
// }