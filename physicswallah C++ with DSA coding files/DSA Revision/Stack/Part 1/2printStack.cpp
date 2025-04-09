#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack <int> st;
    st.push(44); //1
    st.push(45);//2
    st.push(46);//3
    st.push(4);//4
    st.push(40);//5
    st.push(41);//6
    cout<<"Initially"<<endl;
    cout<<"St Size: "<<st.size()<<endl; 
    cout<<"Top Element st: "<<st.top()<<endl;
    cout<<endl;

    stack <int> temp;
    
    // printing and removing element and storing in temp
    while(st.size()>0){     
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }

    cout<<endl<<"temp Size: "<<temp.size()<<endl;
    cout<<"temp Top Element: "<<temp.top()<<endl;
    cout<<"St Size: "<<st.size()<<endl; 

    // pushing back to the sc
    while(temp.size()>0){     
        st.push(temp.top());
        temp.pop();
    }

    cout<<"finally"<<endl;
    cout<<"St Size: "<<st.size()<<endl; 
    cout<<"Top Element st: "<<st.top()<<endl;
    cout<<"temp Size: "<<temp.size()<<endl;

    
    
}


