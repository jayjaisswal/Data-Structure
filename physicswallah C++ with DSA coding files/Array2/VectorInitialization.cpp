#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> v(5);
    cout<<v.size()<<endl; 
    cout<<v.capacity()<<endl; 
    cout<<v[4]<<endl;

    vector<int> vt(5,7);//initial size = 5,each element have value 7
    cout<<vt[4]<<endl;

    return 0;
}