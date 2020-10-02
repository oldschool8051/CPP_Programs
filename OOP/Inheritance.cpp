#include <iostream>
using namespace std;
class Parent
{
	public:
		Parent()
		{
			cout<<"Parent class constructor"<<endl;
		}
		~Parent()
		{
			cout<<"Parent class destructor"<<endl;
		}
};
class Child
{
	public:
		Child()
		{
			cout<<"Child class constructor"<<endl;
		}
		~Child()
		{
			cout<<"Child class destructor"<<endl;
		}
};
class Child1:public Child,public Parent
{
	public:
		Child1()
		{
			cout<<"child 1 class constructor"<<endl;
		}
		~Child1()
		{
			cout<<"Child1 class destructor"<<endl;
		}
};
int main()
{
	Child1 c;
	return 0;

}
