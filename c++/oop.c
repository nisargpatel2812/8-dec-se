OOPS : 

class : class is collection of diff diff data members

        class is blueprint of  object

        class is collection of elements

        it is user defined dataypes

syntax:  

classs <classsname>()
{
     public;
       data member;
       memeber function();
};

-------------------------------------------------------------

OBJECT : it is an instance of class. or we can say that obj is a var of class.

using of obj we can access properties of classs.

SYNTAX :  

classname objname = classname();

CODE ::

#include<iostream>
using namespace std;
class Sample
{
	public:
		int a;
		string name;
};
int main()
{
	Sample obj = Sample();
	obj.a = 10;
	obj.name = "nisarg";
	
	cout<<"a = "<<obj.a;
	cout<<"\nname = "<<obj.name;
}

---------------------------------------------------------------------------------

#include<iostream>
using namespace std;
class Student
{
	public:
		int id;
		string name;
		
		void input()
		{
			cout<<"enter id : ";
			cin>>id;
			cout<<"enter name : ";
			cin>>name;
		}
		void display()
		{
			cout<<"\n id = "<<id;
			cout<<"\n name = "<<name;
			
		}
};



int main()
{
	Student obj = Student();
	obj.input();
	obj.display();
}

-----------------------------------------------------------------------------

CONSTRUCTOR :: constructor is most powerfull concept of c++
               it is a special member fun
               or we can say that it is a speical method

               which is invoke automatically when we creat an object of class
               it is usually work for initialization members 

    NOTE :  it does not have any returen type
            and it always declare in public mode.

        
    it name and classname both are same we vcant take diff as a constructor

    syntax :: 

    class<classname>
    {
        constructor:
          body of constructor
    }

----------------------------------------------------------------------------------

#include<iostream>
using namespace std;
class Student
{
	public:
		int id;
		string name;
		
		Student()
		{
			cout<<"\n welcome to student portal";
			id = 1;
			name = "nisarg";
		}
		
		void display()
		{
			cout<<"\n id = "<<id;
			cout<<"\n name = "<<name;
			
		}
};



int main()
{
	Student obj;
	obj.display();
}


------------------------------------------------------------------------------------

there are 3 types of constructor

1) DEFAULT
2) PARAMETERIZED 
3) COPY 


1) DEFALUT :: does not contain any parameter when we want to display or do some static value we can 
             use this

2) PARAMETERIZED :: when we pass PM at objecy=t creation  time its called PM CONSTRUCTOR.

CODE  PM CONSTRUCTOR::

#include<iostream>
using namespace std;
class Student
{
	public:
		int id;
		string name;
		
		Student(int idValue,string nameValue)
		{
		
			id = idValue;
			name = nameValue;
		}
		
		void display()
		{
			cout<<" id = "<<id;
			cout<<"\n name = "<<name;
			
		}
};



int main()
{
	Student obj(1,"nisarg");
	obj.display();
}
