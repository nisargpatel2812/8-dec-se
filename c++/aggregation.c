ABSTRACTION :: 

#include<iostream>
using namespace std;
class Vehicle
{
	public:
		virtual void wheels() = 0;
};
class Car : public Vehicle
{
	public:
		void wheels()
		{
			cout<<"i have 4";
		}
};
class Bike : public Vehicle
{
	public:
		void wheels()
		{
			cout<<"\ni have 2";
		}		
};

main()
{
	Car car = Car();
	Bike bike = Bike();
	
	car.wheels();
	bike.wheels();
}

------------------------------------------------------------------------------------

AGGREGATION :: it is a part of reletionship

           inheritance provide IS - A relationship

           aggregation provide HAS - A reletionship

           IS -A reletionship : parent is connected with child(100% inheritance)

           HAS - A reletionship : department has a staff 
                                 (we are use properties of another class using refrence instead 
                                  of inheritanace)



code:

#include<iostream>
using namespace std;
class Address
{
	public:
		string city;
		string state;
		int pincode;
		
		Address(string city,string state,int pincode)
		{
			this->city = city;
			this->state = state;
			this->pincode = pincode; 
		}
};
class Student
{
	public:
		string name;
		Address* address;
		
		Student(string name,Address*address)
		{
			this->name = name;
			this->address = address;
		}
		
		void display()
		{
			cout<<"\n name : "<<name;
			cout<<"\n city : "<<address->city;
			cout<<"\n state : "<<address->state;
			cout<<"\n pincode : "<<address->pincode;
		}
};
main()
{
	Address address("ahemdabad","gujrat",380015);
	Student std("nisarg",&address);
	
	std.display();
}

----------------------------------------------------------------------------

FRIEND FUNCTION ::  it is a special member function which can access private member outside the 
                    class friend func declare with using of friend keyword

                    syntax :: 
                             friend <returntype> <funname> (classname obj);


#include<iostream>
using namespace std;
class Sample
{
	private:
		int score = 100;
		
	public:
		friend void displayScore(Sample obj);
	
};
void displayScore(Sample obj)
{
	cout<<"\n score = "<<obj.score;
}
main()
{
	Sample obj = Sample();
	displayScore(obj);
}

------------------------------------------------------------------

FRIEND CLASS ::  aclass can accept properties of another classs private properties

synatx :: 

class anotherclass; //forward declaration

class Mainclass
{
    private:
       member

    friend class <friendclassname>;
};

