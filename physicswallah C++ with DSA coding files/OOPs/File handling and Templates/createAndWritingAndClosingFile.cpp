#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream CreatedFile;
    CreatedFile.open("C:\\Users\\kumar\\OneDrive\\Desktop\\file.txt");
    CreatedFile<<"Thank u so so MUch :)";
    cout<<"DAta has been Written in the file :)";
    CreatedFile.close();


return 0;
}