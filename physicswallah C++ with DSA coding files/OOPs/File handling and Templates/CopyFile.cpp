#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream ReadingFile;
    ofstream CreatedFile;
    
    char str;
    CreatedFile.open("C:\\Users\\kumar\\OneDrive\\Desktop\\file2.txt");
    ReadingFile.open("C:\\Users\\kumar\\OneDrive\\Desktop\\file.txt");
    
    while(ReadingFile.get(str))
    {
        CreatedFile.put(str);

    }
    cout<<"copied!!";
    CreatedFile.close();
    ReadingFile.close();




return 0;
}