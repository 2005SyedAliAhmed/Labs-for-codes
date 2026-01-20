#include <iostream>
using namespace std;

int main() 
{
    int a, b;
    int *prt,*q;

    cout << "Enter value of a: ";
    cin >> a ;
    cout << "Enter value of b: ";
    cin >>b;
    prt = &a;
    q = &b;
    int temp =*prt;
    *prt =*q;
    *q =temp;

    cout<<"After swapping:\n";
    cout<<"a="<<a<<", b="<<b<<endl;
    return 0;
}
