// class Solution {
//     public:
//         int largestRectangleArea(vector<int>& heights) {

//             // next smaller index.....................................
//             int n = heights.size();
//             stack<int> sc;
//             vector<int> arr(n);
//             vector<int> brr(n);
//             arr[n-1] = n;
//             sc.push(n-1);
//             for(int i=n-2;i>=0;i--){
//                 while(sc.size()>0 && heights[sc.top()]>=heights[i]){
//                     sc.pop();
//                 }
    
//                 if(sc.size()==0){
//                      arr[i] = n;
//                 }
//                 else arr[i] = sc.top();
    
//                 sc.push(i);
//             }
    
//             // previous smaller element..........................................
    
//             stack<int> gt;
//             // int brr[n];
//             brr[0] = -1;
//             gt.push(0);
//             for(int i=1;i<n;i++){
//                 while(gt.size()>0 && heights[gt.top()]>=heights[i]){
//                     gt.pop();
//                 }
    
//                 if(gt.size()==0) brr[i] = -1;
//                 else brr[i] = gt.top();
    
//                 gt.push(i);
//             }

//.......................................................................................
    
//             int area = 0;
//             for(int i = 0;i<n;i++){
//                 int length = heights[i];
//                 int breadth = arr[i]-brr[i]-1;
//                 area = max(area,length*breadth);
//             }
    
//             return area;
    
    
    
            
//         }
//     };