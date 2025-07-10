// Reorder Queue (Interleave 1st Half with 2nd Half)
// [Do this by using one Stack only]

#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;
void display(queue<int> &q)
{
    for (int i = 0; i < q.size(); i++)
    {
        int x = q.front();
        cout << x << " ";
        q.pop();
        q.push(x);
    }
    cout << endl;
}
void reorderQueue(queue<int> &q)
{
    stack<int> st;
    int n = q.size();
    // step 1 push first half into stack
    for (int i = 0; i < n / 2; i++)
    {
        st.push(q.front());
        q.pop();
    }
    // step 2 push first half back to queue
    while (st.size() > 0)
    {
        q.push(st.top());
        st.pop();
    }
    // step 3 again push first half into stack
    for (int i = 0; i < n / 2; i++)
    {
        st.push(q.front());
        q.pop();
    }
    // step 4 pick one ele from stack and push tp
    // the queue . take one ele from queue and push
    // to queue and pop
    while (st.size() > 0)
    {
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }

    // step 5 reverse
    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
    // step 5 reverse
    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
}

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    display(q);
    reorderQueue(q);
    display(q);
}