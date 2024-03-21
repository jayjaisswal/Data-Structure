#include <iostream>
using namespace std;
int main()
{
    int n, c, DSA = 3, OOPs = 3, DCLD = 3, DCCN = 3, PPLE = 3, DSALab = 1, DCCNLab = 1, DCLDLab = 1,OOPsLab=1,Training=1,Seminar=1;
    int c1 = DSA + OOPs + DCLD + DCCN + PPLE + DSALab + DCCNLab + DCLDLab+OOPsLab+Training+Seminar;
    double arr[10];//, o, o1, o2, o3, o4, o5, o6, o7,o8,o9,o10;
    string sub[] = {"DSA","OOPs","DCLD","DCCN","PPLE","DSA-Lab","OOPs-Lab","DCCN-Lab","DCLD-Lab","Training-1","Seminar"};
    for (n = 0; n <=10; n++)
    {
        cout<< "Enter your " << sub[n] << " marks"<< ":";
        cin >> arr[n];
    }
    // o = arr[0] / 100 * 100;
    // o1 = arr[1] / 100 * 100;
    // o2 = arr[2] / 100 * 100;
    // o3 = arr[3] / 100 * 100;
    // o4 = arr[4] / 100 * 100;
    // o5 = arr[5] / 50 * 100;
    // o6 = arr[6] / 50 * 100;
    // o7 = arr[7] / 50 * 100;
    // o8 = arr[8] / 50 * 100;
    // o9 = arr[9] / 100 * 100;
    // o10 = arr[10] / 50 * 100;
    int p = (arr[0]/ 10) + 1;
    int p1 = (arr[1] / 10) + 1;
    int p2 = (arr[2] / 10) + 1;
    int p3 = (arr[3] / 10) + 1;
    int p4 = (arr[4] / 10) + 1;
    int p5 = (arr[5] *2/ 10) + 1;
    int p6 = (arr[6]*2 / 10) + 1;
    int p7 = (arr[7] *2/ 10) + 1;
    int p8 = (arr[8] *2/ 10) + 1;
    int p9 = (arr[9] / 10) + 1;
    int p10 = (arr[10] *2/ 10) + 1;
    double res = p * DSA;
    double res1 = p1 * OOPs;
    double res2 = p2 * DCLD;
    double res3 = p3 * DCCN;
    double res4 = p4 * PPLE;
    double res5 = p5 * DSALab;
    double res6 = p6 * OOPsLab;
    double res7 = p7 * DCCNLab;
    double res8 = p8 * DCLDLab;
    double res9 = p9 * Training;
    double res10 = p10 * Seminar;
    double sum = res + res1 + res2 + res3 + res4 + res5 + res6 + res7 +res8 + res9 + res10;
    double sgpa = sum / c1;
    cout << "SGPA\n"
         << sgpa;
    return 0;
}