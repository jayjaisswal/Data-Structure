// push efficient approach
// class MyQueue {
//     public:
//         stack<int> st;
//         stack<int> helper;
    
//         MyQueue() {
            
//         }
        
//         void push(int x) { // O(1)
//             st.push(x);
    
            
//         }
        
//         int pop() { // O(n)
//             // remove at bottom
//             while(st.size()>0){
//                 helper.push(st.top());
//                 st.pop();
//             }
//             int x = helper.top();
//             helper.pop();
//              while(helper.size()>0){
//                 st.push(helper.top());
//                 helper.pop();
//             }
//             return x;    
//         }
        
//         int peek() { // front // O(n)
//         // retrieve at bottom
//             while(st.size()>0){
//                 helper.push(st.top());
//                 st.pop();
//             }
//             int x = helper.top();
           
//              while(helper.size()>0){
//                 st.push(helper.top());
//                 helper.pop();
//             }
//             return x;
            
//         }
        
//         bool empty() {
//             if(st.size()==0) return true;
//             else return false;
            
//         }
//     };



// class MyQueue {
//     public:
//     // pop and front efficient approach
//         stack<int> st;
//         stack<int> helper;
    
//         MyQueue() {
            
//         }
        
//         void push(int x) { // O(n)
//             if(st.size()==0) {
//                 st.push(x);
//                 return;
//             }
//             else
//             {
//                 while(st.size()>0){
//                 helper.push(st.top());
//                 st.pop();
//                 }
            
//                 st.push(x);
//                 while(helper.size()>0){
//                     st.push(helper.top());
//                     helper.pop();
//                 }
//             }   
//         }
        
//         int pop() { 
    
//             int x = st.top();
//             st.pop();
            
//             return x;    
//         }
        
//         int peek() { 
    
//             return st.top();;
            
//         }
        
//         bool empty() {
//             if(st.size()==0) return true;
//             else return false;
            
//         }
//     };
    