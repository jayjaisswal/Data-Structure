// class Solution {
//     public:
//         string predictPartyVictory(string s) {
//             queue<int> q;
//             queue<int> r; //"Radiant"
//             queue<int> d; //"Dire"
//             int n = s.size();
//             for(int i = 0;i<n;i++){
//                 q.push(i);
//                 if(s[i]=='R') r.push(i);
//                 if(s[i]=='D') d.push(i);
//             }
    
//             while(q.size()>1){
//                 if(s[q.front()]=='x') q.pop();
                
//                 else if(s[q.front()]=='R'){
//                     // take the all right of next D
//                     if(d.size()==0) return "Radiant";
//                     else{
//                         s[d.front()] = 'x';
//                         d.pop();
    
//                         q.push(q.front());
//                         q.pop();
//                         r.push(r.front());
//                         r.pop();
    
//                     }
    
//                 }
//                 else if(s[q.front()]=='D'){
//                     // take the all right of next D
//                     if(r.size()==0) return "Dire";
//                     else{
//                         s[r.front()] = 'x';
//                         r.pop();
    
//                         q.push(q.front());
//                         q.pop();
//                         d.push(d.front());
//                         d.pop();
    
//                     }
//                 }
//             }
    
//             if(r.size()==1) return "Radiant";
//             else return "Dire";
            
//         }
//     };