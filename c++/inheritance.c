inheritance :: it is a most imp powerfull of oops concepts

-> it providde reusability - so we can reduce our work and save development time
-> it provide parent and child reletionship

there are 5 types

1) single level 
2) multi level
3) multiple
4) hierachical 
5) hybrid

-> it is a part of reletipnship , so it represent IS-A reletionship
-> parent - child (100% utility of perents properties)

------------

1) single level :: when a parent and child is in reletionship it called.............

   A (parent)
   |
   B (child)

syntax :: 

class parentclass
{

};
class childclass : <accessSpecifier> <parentclass>
{

};

---------------------------

2) multi-level ::  extended level of multi level inheritance

class A            // class A is super or base or parent
{

};
class B           // class B is intermediate class 
{

};
class C           // class C is sub or derived or child
{

};


#include<iostream>
using namespace std;
class A
{
	public: 
	int num1;
	void inputA()
	{
		cout<<"enter num 1 : ";
		cin>>num1;
	}
};
class B : public A
{
	public: 
	int num2;
	void inputB()
	{
		cout<<"enter num 2 : ";
		cin>>num2;
	}
};
class C : public B
{
	public:
		int ans;
		void display()
		{
			ans =  num1 + num2;
			cout<<"\nans = "<<ans;
		}
};
int main()
{
	C obj=C();
	obj.inputA();
	obj.inputB();
	obj.display();
}

---------------------------------------------

3)multiple :: in this inheritance there are more than 1 parent class and one childclass

means one child can have more than one parent or we can say that multiple class

but in real life multiplle inheritance not supported cause 2 parents cant be reak+l thats why java dont support this 


its main aim to achieve multiple parents functonality to one child

syntax :: 

class parent1
{

};
class parent2
{

};
child class : <accessSpecifier> parent1 , <accessSpecifier> parent2 
{

};

but there are high chance of ambiguity (confusion b\w same same properties)

#include<iostream>
using namespace std; 
class A
{
	public: 
	int num1;
	void inputA()
	{
		cout<<"enter num 1 : ";
		cin>>num1;
	}
};
class B : public A
{
	public: 
	int num2;
	void inputB()
	{
		cout<<"enter num 2 : ";
		cin>>num2;
	}
};
class C : public B
{
	public:
		int ans;
		void display()
		{
			ans =  num1 + num2;
			cout<<"\nans = "<<ans;
		}
};
int main()
{
	C obj=C();
	obj.inputA();
	obj.inputB();
	obj.display();
}

---------------------------------------------------------------
4) hierachical :: 

             A 
             |
             v
     -----------------
     |               |
     v               v
     B               C

     when one parent have multiple child class


     code :::

     #include<iostream>
using namespace std;
class A
{
	public:
		int num1,num2;
		void input()
		{
			cout<<"\nenter number 1 : ";
			cin>>num1;
			cout<<"\nenter number 2 : ";
			cin>>num2;
		}
		void display()
		{
			cout<<"\n number 1 : "<<num1;
			cout<<"\n number 2 : "<<num2;
		}
};
class B : public A
{
	public:
		int ans;
		void addition()
		{
			ans =  num1 + num2;
			cout<<"\nans = "<<ans;
		}
};
class C : public A
{
	public:
		int ans;
		void multiplication()
		{
			ans =  num1 * num2;
			cout<<"\nans = "<<ans;
		}
};
int main()
{
	B objB = B();
	C objC = c();
	
	
}

---------------------------------------------------------------
5) hybrid :: most complicated inheritance
             cuz it represent like diamond - and it creat ambigity

             in sample lang we can say that multiple inheritance is a combination of multiple 
             and hirrechical inheritance

             A 
             |
----------------------------
|                          |
B                          C 
-----------------------------
            |
            D


#include<iostream>
using namespace std;
class A
{
	public:
		int marks = 100;
		void hello()
		{
			cout<<"\nhello";
		}
		
};
class B : public A
{
	public:
		void displayB()
		{
			cout<<"\n marks = "<<marks;
		}
		
};
class C : public A
{
	public:
		void displayC()
		{
			cout<<"\n marks = "<<marks;
		}
		
};
class D : public B , public C
{
	
};
int main()
{
	D obj = D();
    obj.displayB();
	obj.displayC();
	
	//obj.hello();
	//obj.A::hello();
	
}
---------------------------------------------------------------
to resolve diamond method we can use virtual keyword

now,virtual inform complier that you dont have to create seprate copy of parent class instead of 
separate copy u can pass duplicat copy so, it remove ambiguty


#include<iostream>
using namespace std;
class A
{
	public:
		int marks = 100;
		void hello()
		{
			cout<<"\n hello";
		}
		
};
class B :virtual public A
{
	public:
		void displayB()
		{
			cout<<"\n marks = "<<marks;
		}
		
};
class C :virtual public A
{
	public:
		void displayC()
		{
			cout<<"\n marks = "<<marks;
		}
		
};
class D : public B , public C
{
	
};
int main()
{
	D obj = D();
    obj.displayB();
	obj.displayC();
	
	obj.hello();
	//obj.A::hello();
	
}
---------------------------------------------------------------

access specifier or visibility modes 

there aare 3 types 

1) public
2) private
3) protected 

--------------

in structure by default all members are public but in calss by default  all members are private so, 
we have to define in public mode.

1)  public :: we can access the properties by anywhere from the outside the class
     
-> amnywhere from the program

2) private :: private data - we cant access the class even a child class cant use the private class 
              data member and functionality 

-> private provide the protection and data hiding in class functionality

3) protected :: it is similar like private but protected members can access by own child and child class

-> own class and child class.

#include<iostream>
using namespace std;
class parent
{
	public:
		int a = 10;
		
};
class child : public parent
{
	public:
		void display()
		{
			cout<<"a = "<<a;
		}
};
int main()
{
	child obj = child();
	cout<<"a = "<<obj.a;
	obj.a = 20;
	cout<<"\na = "<<obj.a;
	
}
----------------------------------------

