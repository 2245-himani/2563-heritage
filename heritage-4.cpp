#include<iostream>
#include<string.h>
using namespace std;
class A
{
	public:
		int id;
		char name[100];
		char role[100];
		int salary;
		int experience;
		char comp_name[100];
		char add[100];
		int cont_nu;
		char email[100];
		
		public:
			void setter()
			{
				cout<<"Enter the id of employe :"<<endl;
				cin>>id;
				cout<<"Enter the name of employe :"<<endl;
				cin>>name;
				cout<<"Enter the role of employe :"<<endl;
				cin>>role;
			}
};
class B : public A
{
	public:
		void set1()
		{
			cout<<"Enter the salary of employe :"<<endl;
			cin>>salary;
			cout<<"Enter the experience of employe :"<<endl;
			cin>>experience;
		}
};
class C : public B
{
	public:
		void set2()
		{
			cout<<"Enter the company name of employe :"<<endl;
			cin>>comp_name;
			cout<<"Enter the Adrress of employe :"<<endl;
			cin>>add;
		}
		
		void get()
		{
			cout<<"The name of employe is :"<<name<<endl;
			cout<<"The role of emloye is :"<<role<<endl;
			cout<<"The salary of employe is :"<<salary<<endl;
		}
};
class D : public C
{
	public:
		void set3()
		{
			cout<<"Enter the email of employe :"<<endl;
			cin>>email;
			cout<<"Enter the contact of employe :"<<endl;
			cin>>cont_nu;
		}
		void get1()
		{
			cout<<"The employe's ID is :"<<id<<endl;
			cout<<"The employe's name is :"<<name<<endl;
			cout<<"The employe's role is :"<<role<<endl;
			cout<<"The employe's salary is"<<salary<<endl;
			cout<<"The employe's experience is :"<<experience<<endl;
			cout<<"The employe's comp_name is :"<<comp_name<<endl;
			cout<<"The employe's address is :"<<add<<endl;
			cout<<"The employe's contact is :"<<cont_nu<<endl;
			cout<<"the employe's email is:"<<email<<endl;
		}
};
int main()
{
	D d1;
	d1.setter();
	d1.set1();
	d1.set2();
	d1.set3();
	d1.get1();

}
