#include<stdio.h>
void main()
{
    int num1;
    
    printf("enter a num = ");
    
    scanf("%d" , &num1);
    
    printf("%d" , num1%2==0);
    
}

--------------------------------------------------------------------------

CONROL STATEMENT :

--there are 3 types of control statement 

1) conditional statement
2) looping
3) jumping


*1) conditional : which is base don condition wise

-- there are 5 types of the conditional statement 

i) if
ii) if else
iii) else if
iv) nested if 
v) switch

*i if : if conditio true it will execute the program

SYNTAX : if(condition)
         {

         }


*ii) if else : if condition is true and will execute in if, else is false and execute in else

if(condition)
         {

         }


else
    {

     }
EXAMPLE : 

#include<stdio.h>
void main()
{
    int num;
    
    printf("enter a num = ");
    
    scanf("%d" ,&num);
    
    if(num>0 )
    {
        printf("\n%d is positive num" , num);
    }
    else
    {
        printf("\n%d is negative num" , num);
    }
}

------------------------------------------------------

< less than
< less than equal too
> greater than
>= greater than equal too
== equal too

------------------------------------------------------