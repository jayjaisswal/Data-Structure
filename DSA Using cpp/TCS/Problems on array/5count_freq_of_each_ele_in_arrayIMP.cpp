#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    
    int arr[] = {12, 3, 5, 7, 19, 3, 5, 7, 19, 12, 3, 5, 7, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int freq = 0;
     // to keep track of visited elements
    bool visited[n] = {false};
    for(int i = 0;i<n;i++){
        int freq = 1;
        if(visited[i] == true){ // if already visited, skip
            continue;
        }
        for(int j = i+1;j<n;j++){
           if(arr[i]==arr[j]){
                freq++;
                visited[j] = true; // mark as visited

            }

        }
        cout << "Frequency of " << arr[i] << " is: " << freq << endl; // +1 for the current element

        
    }
    
    
    
}