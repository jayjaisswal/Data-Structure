// Dry run its very much important 1:53:25
#include <iostream>
using namespace std;

int maze(int sr, int sc, int er, int ec){
    // maze(1,1,3,3)
    // base case
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightWays = maze( sr,  sc+1,  er,  ec);
    int downWays = maze( sr+1,  sc,  er,  ec);
    return rightWays + downWays;
}
int maze2( int row, int col){
    // maze(1,1,3,3)
    // base case
    if(row<1 || col<1) return 0;
    if(row==1 && col==1) return 1;
    int rightWays = maze2( row, col-1);
    int downWays = maze2( row-1, col);
    return rightWays + downWays;
}

void printPath(int sr, int sc, int er, int ec, string s){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){
        cout<<s<<endl;
        return;

    }
    printPath(sr, sc+1, er, ec, s+"R");
    printPath(sr+1, sc, er, ec, s+"D");
}

// printPath2---> use 2 parameter and string 

int main()
{
    
    cout << maze(1,1,3,3)<<endl;
    cout << maze2(3,3)<<endl;
    printPath(1,1,4,4,"");
}
