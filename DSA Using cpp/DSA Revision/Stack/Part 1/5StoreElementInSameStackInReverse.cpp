#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> original;
    stack<int> temp1;
    stack<int> temp2;
    original.push(44);
    original.push(45);
    original.push(46);
    original.push(4);
    original.push(40);
    original.push(41);

    

    // pusing from original to temp1 -> Now reverse in temp 1
    while (original.size() > 0)
    { 
        temp1.push(original.top());
        original.pop();
    }

    // pusing from temp1 to temp2 ->now Normal in temp 2
    while (temp1.size() > 0)
    { 
        temp2.push(temp1.top());
        temp1.pop();
    }

    // pusing from temp2 to original -> Now reverse in original
    while (temp2.size() > 0)
    { 
        original.push(temp2.top());
        temp2.pop();
    }

    // Printing element of original stack
    // while (original.size() > 0)
    // {
    //     cout << original.top() << " ";
    //     original.pop();
    // }
}