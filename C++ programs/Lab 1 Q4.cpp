#include <iostream>
using namespace std;

void add(int a[3][3], int b[3][3]) // using a addition function
 {
    cout << "Addition of matrices:\n";
    for (int i=0; i<3;i++) 
	{
        for (int j=0;j<3;j++) 
		{
            cout<<a[i][j]+b[i][j]<<" ";
        }
        cout<<endl;
    }
}

void multiply(int a[3][3], int b[3][3]) // using a multiplicative function 
 {
    int c[3][3]={0};

    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            for (int k = 0; k < 3; k++) 
			{
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }

    cout << "Multiplication of matrices:\n";
    for (int i=0;i<3;i++) 
	{
        for (int j=0;j<3;j++)
		 {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int a[3][3], b[3][3];

    cout<<"Enter first 3x3 matrix:\n";
    for (int i=0;i<3;i++)
        for (int j=0;j<3;j++)
            cin>>a[i][j];

    cout<<"Enter second 3x3 matrix:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin>>b[i][j];
            
    add(a,b);
    multiply(a, b);
    return 0;
}
