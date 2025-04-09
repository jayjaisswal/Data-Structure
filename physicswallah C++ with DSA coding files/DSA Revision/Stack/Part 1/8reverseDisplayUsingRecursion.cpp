#include <iostream>
#include <stack>

using namespace std;
void printRevRes(stack<int>& st){

    if (st.size() == 0)
        return;
    int x = st.top();
    cout << x << " ";
    st.pop();
    printRevRes(st);
    
    st.push(x);
    


}


int main()
{
    stack<int> st;
    stack<int> temp;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    printRevRes(st);
   
 

}