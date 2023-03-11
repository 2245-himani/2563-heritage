#include<iostream>
#include<string.h>
using namespace std;
class read
{
	public:
		int id;
		char name[50];
		int salary;
		void set()
		{
			cout<<"Enter the id of employe :"<<endl;
			cin>>id;
			cout<<"Enter the name of employe :"<<endl;
			cin>>name;
			cout<<"Enter the salary of employe :"<<endl;
			cin>>salary;
		}
};
class print
{
	public:
		int experience;
		char role[50];
		void set1()
		{
			cout<<"Enter the experience of employe :"<<endl;
			cin>>experience;
			cout<<"Enter the role of employe :"<<endl;
			cin>>role;
		}
};
class employe : public read , public print
{
	public:
		char add[50];
		char email[50];
		void set2()
		{
			cout<<"Enter the address of employee :"<<endl;
			cin>>add;
			cout<<"Enter the Email of employee :"<<endl;
			cin>>email;
				cout<<"ID :"<<id<<endl<<"Name :"<<name<<endl<<"salary :"<<salary<<endl<<"experience :"<<experience<<endl<<"Role :"<<role<<endl<<"Adrress :"<<add<<endl<<"Email :"<<email<<endl;
		}	
	
};
int main()
{
	employe e1;
	e1.set();
	e1.set1();
	e1.set2();
	return 0;
}
