#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream ReadingFile ; 
    string str;
    ReadingFile.open("C:\\Users\\kumar\\OneDrive\\Desktop\\file.txt");
    while(getline(ReadingFile , str))
    {
        cout<<str;
    }
    
    ReadingFile.close();


return 0;
}