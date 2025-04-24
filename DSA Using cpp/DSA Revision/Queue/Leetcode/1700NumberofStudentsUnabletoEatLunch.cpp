// class Solution {
//     public:
//         int countStudents(vector<int>& students, vector<int>& sandwiches) {
//            int n = students.size();
//            queue<int> q;
//            for(int i =0;i<n;i++){
//             q.push(students[i]);
//            }
//            int i = 0;
//            int count = 0;
//            while(count!=q.size()){
            
//                 if(q.front() == sandwiches[i]){
//                     q.pop();
//                     i++;
//                     count = 0;
//                 }else{
//                     int x = q.front();
//                     q.pop();
//                     q.push(x);
//                     count++;
//                 }
                
//            }
//         return count;
           
//         }
//     };