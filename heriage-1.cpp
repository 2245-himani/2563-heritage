#include<iostream>
#include<string.h>
using namespace std;
class mother
{
	public:
	
	void display()
	{
		cout<<"hey, what's going on!"<<endl;	
	}	
};
class daughter : public mother
{
	public:
	void display()
	{
		cout<<"Nothing mummaa!"<<endl;
	}	
};
int main()
{
	daughter d1;
	d1.mother::display();
	d1.display();
	
}
