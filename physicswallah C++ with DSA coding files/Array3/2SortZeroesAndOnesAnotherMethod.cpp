#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void display(vector<int> &c)
{
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;
}
void sortPass2(vector<int> &v)
{
    int n = v.size();
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (v[i] == 0)
            i++;
        if (v[j] == 1)
            j--;
        if (i > j)
            break;
        if (v[i] == 1 && v[j] == 0)
        {
            v[i] = 0;
            v[j] = 1;
            i++;
            j--;
        }
    }
}

int main()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);

    display(v);
    sortPass2(v);
    display(v);

    return 0;
}



/////orrr
// while (i < j)
//     {
//         if (v[i] == 0)
//             i++;
//       else  if (v[j] == 1)
//             j--;
//        
//       else  if (v[i] == 1 && v[j] == 0)
//         {
//             v[i] = 0;
//             v[j] = 1;
//             i++;
//             j--;
//         }

/////orrr
// while (i < j)
//     {
//         if (v[i] == 0)
//             i++;
//         if (v[j] == 1)
//             j--;
//        
//       else  if (v[i] == 1 && v[j] == 0)
//         {
//             v[i] = 0;
//             v[j] = 1;
//             i++;
//             j--;
//         }


/////orrr
// while (i < j)
//     {
//
//             if (v[i] == 1 && v[j] == 0)
//         {
//             v[i] = 0;
//             v[j] = 1;
//             i++;
//             j--;
//         }
//         if (v[i] == 0)
//             i++;
//         if (v[j] == 1)
//             j--;
//        
//        if (v[i] == 1 && v[j] == 0)
//         {
//             v[i] = 0;
//             v[j] = 1;
//             i++;
//             j--;
//         }