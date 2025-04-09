#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

int main() {
    stack <int> st;
    cout<<st.size()<<endl;  //0
    st.push(44); //1
    st.push(45);//2
    st.push(46);//3
    st.push(4);//4
    st.push(40);//5
    st.push(41);//6
    // cout<<st.size()<<endl; //6
    // st.pop(); 
    // cout<<st.size()<<endl; //size-> 5    
    // cout<<st.top()<<endl; //40

    // printing in reverse order
    while(st.size()>0){     //o/p-> 41 40 4 46 45 44
        cout<<st.top()<<" ";
        st.pop();
    }

    
    
}