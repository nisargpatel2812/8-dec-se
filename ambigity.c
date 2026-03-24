there is one issue or we can a problem with multiple inheritance.

ambigity : it means both parent has same name methods and child import (inherite) , it it generate 
           confusion it called ambigity.

    ->     unfortunatlly child have 2 same name method so , compiler get cofuse which method i 
           have to access first.

   #include<iostream>
using namespace std;
class A
{
	public:
		void display()
		{
			cout<<"\nhere is A";
		}
};
class B
{
	public:
		void display()
		{
		   cout<<"\nhere is A";
		}
};
class C : public A , public B
{
	void myname()
	{
		cout<<"\nhere is C";
	}
};

int main()
{
	C obj = c();
	obj.display();
}

--------------------------------------------
:: ---> this is scope resolution operator means which class properties u want to access

#include<iostream>
using namespace std;
class A
{
	public:
		void display()
		{
			cout<<"\nhere is A";
		}
};
class B
{
	public:
		void display()
		{
		   cout<<"\nhere is A";
		}
};
class C : public A , public B
{
	public:
		void mymethod()
	{
		cout<<"\nhere is C";
	}
	
};

int main()
{
	C obj = C();
	//obj.display();
	
	obj.A::display();
	obj.B::display();
	obj.mymethod();
}