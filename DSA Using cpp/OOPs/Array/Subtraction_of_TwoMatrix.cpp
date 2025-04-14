#include<iostream>
using namespace std;
int main()
{
    int mat1[2][2], mat2[2][2], i, j, mat3[2][2];
    cout<<"Enter Elements of First Matrix: "<<endl;
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            cin>>mat1[i][j];
    }
    cout<<"Enter Elements of Second Matrix: "<<endl;
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            cin>>mat2[i][j];
    }
    cout<<"\nAdding the Two Given Matrix...\n";
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            mat3[i][j] = mat1[i][j]-mat2[i][j];
    }
    cout<<"Addition Result of Two Given Matrix is:\n";
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            cout<<mat3[i][j]<<" ";
        cout<<endl;
    }
   return 0;
}