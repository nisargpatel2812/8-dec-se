# FUNCTION:



it is a most powerful topic of any programming language , it provide reusability 



by this we can reduce our code



so we can save our time



it has  2 types



1. BUILT IN : it is predefined in c lang. EX:- printf,scanf,getch,getc



2\. USER DEFINED :- it is defined by user as per him requirement


 

------------------------------------------------------------------------------------



there are 3 steps to follow function 



step 1: function declaration : syntax <returntype> framework();



step 2 



<returntype> framework();









step 2 : function calling    :  use of function


















---------------------------------------------------------------------------

#include <stdio.h>

void myfun();

void main() 
{
    printf("\nthis is the function example\n");
    
    myfun();
}

void myfun()
{
    printf("\nhello");
    printf("\nwelcome to c programing");
}
  
----------------------------------------------------------------------

code:


#include<stdio.h>

void vote();
void evenOdd();
void positiveNegative();

void main()
{
    int choice = 1;
    while(choice != 0)
 
    {
        printf("         MENU\n");
        printf("\n1. Check voting eligibility");
        printf("\n2. Check even or odd");
        printf("\n3. Check positive or negative");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            vote();
        }
        else if(choice == 2)
        {
            evenOdd();
        }
        else if(choice == 3)
        {
            positiveNegative();
        }
 
        else
        {
            printf("\nInvalid choice!\n\n");
        }
    }
}

void vote()
{
    int age;
    printf("\nEnter your age: ");
    scanf("%d", &age);

    if(age >= 18)
        printf("\nYou are eligible for voting\n\n");
    else
        printf("\nYou are not eligible for voting\n\n");
}

void evenOdd()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("\nNumber is Even\n\n");
    else
        printf("\nNumber is Odd\n\n");
}

void positiveNegative()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    if(num > 0)
        printf("\nNumber is Positive\n\n");
    else if(num < 0)
        printf("\nNumber is Negative\n\n");
    else
        printf("Number is Zero");
}



---
theory


there are mainly 4 types of function are there

1) fun without parameters and fun without returntype.

syntax :
void funname()
{
 
}

2) fun with parameters and fun without return types
syntax:
void funname(parameters,parameters...)
{
 
}

3) fun without parameters and fun with return types
syntax:
returntype funname()
{
   return value;
}

4) fun with parameters and fun with return types
syntax:
returntype funname(parameters)
{
   return value;
}

---
code


#include<stdio.h>

void add(int num1, int num2);

void main()
{
    int n1,n2;
 
    printf("enter a num : ");
    scanf("%d", &n1);
 
    printf("enter a num : ");
    scanf("%d", &n2);

    add(n1,n2);
}

void add(int num1, int num2)
{
    int ans;
    printf("\nans = %d" , num1 + num2);
}