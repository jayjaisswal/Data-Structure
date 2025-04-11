#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

int main() {
    int arr[] = {2, 1, 5, 6, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    

    stack <int> st;
    int ans[n];
    ans[0] = -1;
    st.push(0);
    for(int i =1;i<n;i++){
        while(st.size()>0 && arr[st.top()]>=arr[i]){
            st.pop();
        }

        if(st.size()==0)
            ans[i]=-1;
        else
        ans[i] = st.top();

         st.push(i);


    }

    // print ans
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    
    
}