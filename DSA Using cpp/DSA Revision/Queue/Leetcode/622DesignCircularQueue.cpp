// class MyCircularQueue {
//     public:
//          int f; // front
//         int b; // back
//         int size; // curr size
//         int c; // capacity
//         vector<int> arr;
//         MyCircularQueue(int k) { // k is capacity and it is constructor
//             f = 0;
//             b = 0;
//             size =0;
//             c = k;
//             vector<int> v(k);
//             arr = v;
            
//         }
        
//         bool enQueue(int val) { // push
//             if(size == c) return false;
//             arr[b] = val;
//             b++;
//             if(b==c) b = 0;
//             size++;
//             return true;
            
//         }
        
//         bool deQueue() {  // pop front
//              if (size==0) return false;
//              f++;
//              if(f==c) f = 0;
//              size--; 
//              return true;
            
//         }
        
//         int Front() {
//             if(size ==0) return -1;
//             return arr[f];
    
    
            
//         }
        
//         int Rear() { // back
//          if(size ==0) return -1;
//          if(b==0) return arr[c-1];
//             return arr[b-1];
            
//         }
        
//         bool isEmpty() {
//             if(size==0) return true;
//             else return false;
            
//         }
        
//         bool isFull() { // s == k
//             if(size==c) return true;
//             else return false;
            
//         }
//     };
    
    /**
     * Your MyCircularQueue object will be instantiated and called as such:
     * MyCircularQueue* obj = new MyCircularQueue(k);
     * bool param_1 = obj->enQueue(value);
     * bool param_2 = obj->deQueue();
     * int param_3 = obj->Front();
     * int param_4 = obj->Rear();
     * bool param_5 = obj->isEmpty();
     * bool param_6 = obj->isFull();
     */