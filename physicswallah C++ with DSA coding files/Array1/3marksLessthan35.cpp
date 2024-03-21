#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no. of student" << endl;
    cin >> n;
    int marks[n];
    cout << "enter the marks" << endl;
    // input
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> marks[i];
    }

    for (int i = 0; i <= n - 1; i++)
    {
        if (marks[i] < 35)
        {
            cout << i << " ";
        }
    }

    return 0;
}


//by me

// #include<iostream>
// using namespace std;
// int main()
// {
//     int student_marks[10];
//     for(int i=0;i<=9;i++)
//     {
//         cin>>student_marks[i];
//     }

//     for(int i=0;i<=9;i++)
//     {
//         if(student_marks[i]<35)
//         {
//             cout<<i<<" ";
//         }
//     }

// return 0;
// }