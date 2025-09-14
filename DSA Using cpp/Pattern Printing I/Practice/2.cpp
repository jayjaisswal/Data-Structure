#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    int n,m;
    cout<<"No of rows :";
    cin>>n;
    
    // for(int i =1;i<=n;i++){
    //     for(int j = n-i+1;j>0;j--){
    //         cout<<'*';
    //     }
    //     cout<<endl;
    // }

    // for(int i =1;i<=n;i++){
    //     for(int j = 1;j<=n-i+1;j++){
    //         cout<<'*';
    //     }
    //     cout<<endl;
    // }


    // for(int i =1;i<=n;i++){
    //     for(int j = 1;j<=i;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    // for(int i =1;i<=n;i++){
    //     for(int j = 1;j<=i;j++){
    //         cout<<2*j-1<<" ";
    //     }
    //     cout<<endl;
    // }


    // for(int i =1;i<=n;i++){
    //     int ascii = 65;
    //     for(int j = 1;j<=n;j++){
    //         cout<<(char)(64+j)<<" ";
           
    //     }
    //     cout<<endl;
    // }

 // n is odd here
    // for(int i =1;i<=n;i++){
    //     int ascii = 65;
    //     for(int j = 1;j<=n;j++){
    //         if(j==(n+1)/2 || i==(n+1)/2) cout<<"*";
    //         else cout<<" ";
           
    //     }
    //     cout<<endl;
    // }
    
    // for(int i =1;i<=n;i++){
    //    
    //     for(int j = 1;j<=n;j++){
    //         if(j==i || i+j==n+1) cout<<"*";
    //         else cout<<" ";
           
    //     }
    //     cout<<endl;
    // }

    // int a =1;
    // for(int i =1;i<=n;i++){
        
    //     for(int j = 1;j<=i;j++){
    //         cout<<a++<<" ";
    //     }
    //     cout<<endl;
    // }
    
    // int a =1;
    // for(int i =1;i<=n;i++){
    //     if(i % 2==0) a=0;
    //     else a=1;
    //     for(int j = 1;j<=i;j++){
    //         cout<<a<<" ";
    //         if(a==1) a=0;
    //         else a=1;
    //     }
    //     cout<<endl;
    // }
    


    
   
    // for(int i =1;i<=n;i++){
       
    //     for(int j = 1;j<=n;j++){
    //         if(i+j<n+1) cout<<" ";
            
    //     }
    //     for(int k = 1;k<=n;k++){
    //         cout<<"*";
            
    //     }
    //     cout<<endl;
    // }
    
    // for(int i =1;i<=n;i++){
       
    //     for(int j = 1;j<=n;j++){
    //     //    if(j<=i) cout<< " ";
    //     //    else cout<<"*";
    //     if(i<=j) cout<<"*";
    //     else   cout<<" ";
            
    //     }
    //     cout<<endl;
    // }

    //  for(int i =1;i<=n;i++){
       
    //     for(int j = 1;j<=n;j++){
    //         if(i+j<n+1) cout<<" ";
            
    //     }
    //     for(int k = 1;k<=2*i-1;k++){
    //         cout<<"*";
            
    //     }
    //     cout<<endl;
    // }

     for(int i =1;i<=n;i++){
       
        for(int j = 1;j<=n;j++){
            if(i+j<n+1 ) cout<<" ";
            
        }
        for(int k = 1;k<=2*i-1;k++){
            cout<<"*";
            
        }
         for(int j = 1;j<i;j++){
             cout<<" ";
            
        }
        cout<<endl;
    }
    


    
}