#include<iostream>
using namespace std;
class student
{
private:
string name;
int roll_no;
float marks;
public:void input()
	{
	cout<<"enter name of student\n";
	cin>>name;
	cout<<"enetr roll number of student\n";
	cin>>roll_no;
	cout<<"enter marks\n";
	cin>>marks;
	}
	void display()
	{
	cout<<"the name of student is"<<name;
	cout<<"roll number of student is"<<roll_no;
	cout<<"marks of student is"<<marks;
	}
};
int main()
{
student s;
s.input();
s.display();
return 0;
}
