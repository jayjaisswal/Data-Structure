#include <iostream>
#include <stack>

using namespace std;
void display(stack<int> &st)
{

    if (st.size() == 0)
        return;
    int x = st.top();
    st.pop();
    display(st);
    cout << x << " ";
    st.push(x);
}
void pushBottomRes(stack<int> &st, int val)
{

    if (st.size() == 0)
    {
        st.push(val);
        return;

    }
        
    int x = st.top();
    st.pop();
    pushBottomRes(st, val);
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
    display(st);
    pushBottomRes(st, 100);
    cout<<endl;

    display(st);
}


