#include<iostream>
using namespace std;
int main()
{
    char ch1 = 'I', ch2 = 'Q';
    int n1 = 1, n2 = 6;
    double d1 = 1.25, d2 = 20.5;
    char* pch_1 = &ch1;
    char* pch_2 = &ch2;
    int* pn_1 = &n1;
    int* pn_2 = &n2;
    double* pd_1 = &d1;
    double* pd_2 = &d2;
    cout << (void*)pch_1 << (void*)pch_2 << endl;
    cout << pn_1 << pn_2 << endl;
    cout << pd_1 << pd_2 << endl;
    cout << *pch_1 << *pch_2 << endl;
    cout << *pn_1 << *pn_2 << endl;
    cout << *pd_1 << *pd_2 << endl;
    *pch_1 += 32; *pch_2 += 32;
    *pn_1 -= 5; *pn_2 -= 5;
    *pd_1 += 10.0; *pd_2 += 10.0;
    cout << *pch_1 << *pch_2 << endl;
    cout << *pn_1 << *pn_2 << endl;
    cout << *pd_1 << *pd_2 << endl;
    return 0;
}

