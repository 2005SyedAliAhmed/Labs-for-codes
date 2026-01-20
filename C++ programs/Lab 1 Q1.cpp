#include <iostream>
using namespace std;

int main() 
{
    int rollNo;
    float marks[5],total,percentage;

    cout<<"Enter Roll Number: ";
    cin>>rollNo;
    cout << "Enter marks of 5 subjects:\n";
    for (int i=0;i<5;i++)
	 {
        cin>>marks[i];
        total+=marks[i];
    }
    percentage= total/500*100; //out of five hundered marks

    cout<<"Roll Number: "<< rollNo ;
    cout<<"Total Marks: "<< total;
    cout<<"Percentage: "<< percentage ;
    return 0;
}
