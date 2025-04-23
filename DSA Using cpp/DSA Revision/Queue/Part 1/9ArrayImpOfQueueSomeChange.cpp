#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Queue
{
public:
    int f; // front
    int b; // back
    int size;
    // int arr[5];
    vector<int> arr;
    Queue(int val)
    {
        f = 0;
        b = 0;
        size =0;
        vector<int> v(val);
        arr = v;

    }
    void push(int val)
    {
        if (b == arr.size())
        { // 0 based indexing array
            cout << "Queue is full" << endl;
            return;
        }
        arr[b] = val;
        b++;
        size++;
    }

    void pop()
    {
        if (size==0)
        { // or f-b==0 -> size = 0
            cout << "Queue is empty" << endl;
            return;
        }
        f++;
        size--;
    }

    int front()
    {
       if (size==0)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[f];
    }
    int back()
    {
        if  (size==0)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[b - 1];
    }
    int Size()
    {
        return size;
    }

    bool empty()
    {
        if  (size==0)
            return true;
        else
            return false;
    }

    void display()
    {
        for (int i = f; i < b; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Queue q(5);

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    cout<<"front "<<endl;
    cout<<q.front()<<endl;
    cout<<"back "<<endl;
    cout<<q.back()<<endl;
    cout<<"empty "<<endl;
    cout<<q.empty()<<endl;
    cout<<"size "<<endl;
    cout<<q.Size()<<endl;

    cout<<"display "<<endl;
    q.display();
    cout<<"pop "<<endl;
    q.pop();
    q.pop();
    cout<<"display "<<endl;
    q.display();
}