#include<iostream>
using namespace std;
class ExamResult{
	int marks;
	void grade(int marks){
		if (marks>=90){
			cout<<"Your grade is A"<<endl;
		}
	    else if(marks>=80&&marks>=70)
	{
		cout<<"Your grade is B"<<endl;
	}
	 else if(marks>=60&&marks>=50)
	{
		cout<<"Your grade is C"<<endl;
	}
	 else 
	{
		cout<<"Your grade is f"<<endl;
	}
}
}
public:
	void set_marks
