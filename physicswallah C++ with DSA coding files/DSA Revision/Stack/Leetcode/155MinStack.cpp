// Asked in paytm 
// class MinStack {
//     public:
//         stack<int> sc;  
//         MinStack() { // constructor 
            
//         }
        
//         void push(int val) {  // TC: O(1)
//             sc.push(val);
    
            
//         }
        
//         void pop() {  // TC: O(1)
//             sc.pop();
            
//         }
        
//         int top() {  // TC: O(1)
//             return sc.top();
            
//         }
        
//         int getMin() {  // TC: O(n) 
//             // brute force
//             stack <int> helper;
//             int minm = INT_MAX;
//             while(sc.size()>0){
//                 minm = min(minm, sc.top());
//                 helper.push(sc.top());
//                 sc.pop();
    
//             }
//             while(helper.size()>0){
//                 sc.push(helper.top());
//                 helper.pop();
    
//             }
    
//             return minm;
    
    
            
//         }
//     };

// .............................................................................
// M2 using Stack TC O(1) SC O(n)
// Asked in paytm 
// class MinStack {
//     public:
//         stack<int> sc;  
//         stack<int> helper;  
//         MinStack() { // constructor 
            
//         }
        
//         void push(int val) {  // TC: O(1)
//             sc.push(val);
//             if(helper.size()==0 || val<helper.top()) helper.push(val);
//             else helper.push(helper.top());
    
    
            
//         }
        
//         void pop() {  // TC: O(1)
//             sc.pop();
//             helper.pop();
            
//         }
        
//         int top() {  // TC: O(1)
//             return sc.top();
            
//         }
        
//         int getMin() {  // TC: O(1) requirement
        
//         return helper.top();
    
    
//         } 
    
    
//     };
// ..............................................................................................
// m3 using vector TC O(n)
// Asked in paytm 
// class MinStack {
//     public:
//         vector<int> v;  
//         MinStack() { // constructor 
            
//         }
        
//         void push(int val) {  // TC: O(1)
//             v.push_back(val);
    
    
            
//         }
        
//         void pop() {  // TC: O(1)
//             v.pop_back();
            
            
//         }
        
//         int top() {  // TC: O(1)
//             return v[v.size()-1];
            
//         }
        
//         int getMin() {  // TC: O(n) requirement
           
//             int mn = v[0];
//             for(int i = 1;i<v.size();i++){
//                 mn = min(mn,v[i] );
//             }
//             return mn;
    
    
//         } 
    
    
//     };

// ...........................................................................
// M4 TC=O(1) SC=O(1)
// Asked in paytm 
// class MinStack {
//     public:
//         stack<long long> sc;
//         long long min;  
//         MinStack() { // constructor 
//             min = LLONG_MAX;
            
//         }
        
//         void push(long long val) {  // TC: O(1)
//             if(sc.size()==0){
//                 sc.push(val);
//                 min = val;
//             }
//             else if(val>=min) sc.push(val);
//             else{
//                 sc.push(2*val-min);
//                 min = val;
//             }
            
//         }
        
//         void pop() {  // TC: O(1)
//             if(sc.top()<min) {
//                 // sc.top < min means A fake value is present 
//                 // before popping make sure to retrieve the old min
    
//                 int oldMin = 2*min - sc.top();
//                 min = oldMin;
//             }
//             sc.pop();    
//         }
        
//         int top() {  // TC: O(1)
//             if(sc.top()< min) return min;
//             else return sc.top();
    
    
            
            
//         }
        
//         int getMin() {  // TC: O(1) 
//             return min;
    
//         } 
    
    
//     };
    
//     /**
//      * Your MinStack object will be instantiated and called as such:
//      * MinStack* obj = new MinStack();
//      * obj->push(val);
//      * obj->pop();
//      * int param_3 = obj->top();
//      * int param_4 = obj->getMin();
//      */
