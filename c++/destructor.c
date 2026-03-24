DESTRUCTOR :: it mainly work to destroy objecte
              whenever we close our blolck it automatically destroy object after use

              same like cinstructor it also declare in public mode

              but in it we have to add ~(tild) sign in prefix and same name as class name
SYNTAX :: 

~classsname
{
    //body of destructor
};

EXAMPLE :: 

#include<iostream>
using namespace std;
class Sample 
{
	public:
		Sample()
		{
			cout<<"helloo";
		}
		
		~Sample()
		{
			cout<<"\nbyy";
		}
};
int main()
{
	Sample obj = Sample();
}

-------------------------------------------------------------------------

ENCAPSULATION :: it aound like capsule

                it is a mostpowerfull concept of oop which bind diff diff data member and member
                func in single entity and provide data hiding from the outside world

                its concept is achieve by class and object example.

    #include<iostream>
using namespace std;
class Bank
{
	public:
		int balance;
};
int main()
{
	Bank b = Bank();
	b.balance = 10000;
	cout<<"\nbalance = "<<b.balance;
}

-> there is no data control - we can access from anywhere 
-> there is no security - it is not safe for any kind of data
SOLUTION : use here ENCAPSULATION concept

#include<iostream>
using namespace std;
class Bank
{
	private:
		int balance;
		
	public:
		void deposite(int amount)
		{
	    	if(amount > 0)
	    	{
			balance = amount;
		    }
	    }
	    
	    int displaybalance()
	    {
	    	return balance;
		}
};

int main()
{
	Bank b = Bank();
	cout<<"\nadd amount = ";
	int amount;
    cout
	cin>>amount;
	
	b.deposite(amount);
	cout<<b.displaybalance();
}

1) data hiding
2) data prevent from the aoutside the world
3) security - no one can directly change from the outside world
4) data control - no one can add unwanted value or apply changes

  
SETTER AND GETTER :::

now setter method which accept arguments and getter method return arguments

#include<iostream>
using namespace std;
class Student
{
	private:
		int id;
		string name;
		int marks;
		
	public:
		voidsetId(int id)
		{
			this->id = id;
		}
		int getId()
		{
			return id;
		}
		void setName(string name)
		{
			this->name = name;
		}
		string getName()
		{
			return name;
		}
		void setMarks(int marks)
		{
			this->marks = marks;
		}
		int getMarks;
		{
			return marks;
		}
};
int main()
{
	Student student = student();
	
}

--------------------------------------------------------------------------

POLYMORPHISM :: poly means many and morphism means forms

                one name method has diff forms its called polymorphism

                it is derived from greek word one class can contain same name multiple methods

it has 2 types 

1) method overloading : compile time polymorphism

when one class can contain same name multple methods its called method overloading

product 
       -> clickEvent
                    (text)
                    (image)
                    (button)

            note :: same name method with diff signature(parameter)

#include<iostream>
using namespace std;
class Math
{
	public:
		void addition(int num1 , int num2)
		{
			cout<<num1 + num2;
		}
		void addition(int num1 , int num2 , num3)
		{
			cout<<num1 + num2 + num3;
		}
		double addition(double num1 , double num2)
		{
			cout<<num1 + num2;
		}
};
        
int main()
{
	Math math = Math();
    math.addition(10,20);
    math.addition(5,6,4);
    math.addition(65,54);
}


---------------------------
compile time polymorphism:- 
   
which is also known as early binding and static polymorphism

which is achive by overloadding method and operator overloadding


2) method overriding : run time polymorphism 

:- which is known as late binding and dynamib polymorphism

   which is achived by method overriding(inheritance) and virtual function

-----------------------