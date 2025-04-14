// class Solution {
//     public:
//         string countAndSay(int n) {
//             if(n==1) return "1";
//             string str = countAndSay(n-1);
//             int freq = 1;
//             char ch = str[0];
//             string ans = "";
//             for(int i =1;i<str.length();i++){
//                 char dh = str[i];
//                 if(ch==dh){
//                     freq++;
//                 }else{
                    
                    
//                     ans  =ans+(to_string(freq)) + ch;
//                     freq = 1;
//                     ch = dh;
//                 }
    
//             }
    
//               ans  = ans+(to_string(freq)) + ch;
//               return ans;
    
    
            
//         }
//     };