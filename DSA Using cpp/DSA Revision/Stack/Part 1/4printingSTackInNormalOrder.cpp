#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> st;
    st.push(44);
    st.push(45);
    st.push(46);
    st.push(4);
    st.push(40);
    st.push(41);

    stack<int> temp;

    // printing in Normal order
    
    while (st.size() > 0)
    {
        
        temp.push(st.top());
        st.pop();
    }

    // pushing back to the sc
    // printing in normal order
    while (temp.size() > 0)
    {
        cout << temp.top() << " ";
        st.push(temp.top());
        temp.pop();
    }
}