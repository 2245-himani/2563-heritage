#include<iostream>
#include<string.h>
using namespace std;
class animal
{
	public:
		int age;
		char name[50];
		void set_value()
		{
			cout<<"Emnter the age of zebra :"<<endl;
			cin>>age;
			cout<<"Enter the name of zebra :"<<endl;
			cin>>name;
			cout<<"Enter the age of dolphin :"<<endl;
			cin>>age;
			cout<<"Enter the name of dolphin :"<<endl;
			cin>>name;
		}
};
class zebra : public animal
{
	public:
		void abc()
		{
			cout<<"The zebra age is :"<<age<<endl<<"The zebra name is :"<<name<<endl;
		}
};
class dolphin : public zebra
{
	public:
		xyz()
		{
			cout<<"The dolphin age is :"<<age<<endl<<"The dolphin name is :"<<name<<endl;
		}
};
int main()
{
	zebra z1;
	dolphin d1;
	z1.set_value();
	z1.abc();
	d1.set_value();
	d1.xyz();
	return 0;
}
