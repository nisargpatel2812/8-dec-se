#include<stdio.h>
void main()
{
   printf("enter your marks = ");
   
   scanf("%d", &marks);

   printf("your marks =%d", marks);

}

----------------------------------------------------------------

//accept book price from the user and display an console screen

#include<stdio.h>
void main()
{
    float bookPrice;

    //step 1 : variable declaration
    printf("enter book price = ");
    
    //step 2 : ask from user
    scanf("%f" , &bookPrice);
    
    printf("bookprice = ",bookPrice );
    
    
}

-----------------------------------------------------------------

1)arithmetic operator : to perform A.O.  we need to use A.O. 
                        +  -  *  /


2)ASSSIGNMENT OPERATOR : = 


to assign value

short hand operator : combination of A.O. assignment O.
                      += *= -= /=

3)RELATIONAL OPERATOR : or (for comparison)
                        , . .= == %=

4)logical operator && || |

------------------------------------------------------------------

#include<stdio.h>
void main()
{
    int a,b;
    a=10;
    b=5;
    
    printf("a = %d , b = %d\n" , a,b);
     
    a += b;
    
    printf("a = %d , b = %d", a,b);
    

}

------------------------------------------------------------------

#include<stdio.h>
void main()
{
    int num1 , num2;
    int result;
    
    num1 = 10;
    num2 = 15;
    
    result = num1 < num2;
    printf("\n%d" , result);
    
    result = num1 > num2;
    printf("\n%d" , result);
    
    result = num1 == num2;
    printf("\n%d" , result);
    
    result = num1 != num2;
    printf("\n%d" , result);
}

---------------------------------------------------------------



#include<stdio.h>
void main()
{
    int num1,num2, num3;
    num1 = 10;
    num2 = 20;
    num3 = 30;
    
    int result;
    result = (num1 > num2) && (num1 >num3);
    printf("\n%d ", result);
    
    result = (num3 > num2) && (num2 >num3);
    printf("\n%d ", result);
    
    result = (num3 > num2) || (num1 >num3);
    printf("\n%d ", result);
    
}

----------------------------------------------------------------

5) UNITY OPERATOR : increament decrement

this operator divided in 2 part

prefix
postfix

++(i)
--(d)
 

------------------------------------------------------------------

#include<stdio.h>
void main()
{
    int x=5;
    
    printf("\n x = %d" , x);
    
    printf("\n x++= %d" , x++);
    
    printf("\n x = %d" ,x);
    
    printf("\n ++x = %d" , ++x);
    
}

------------------------------------------------------------

6) BITWISE OPE : which is perform on the bits

XOR 
NOT
OR
LEFT SHIFT
RIGHT SHIFT

----------------------------------------------------------------

8) conditional OPE : exp1 ?  exp2 : exp3;

                     ? :

#include<stdio.h>
void main()
{
    int num1 , num2;
    
    num1 = 56;
    num2 = 78;
    
    int max = (num1 < num2) ? num1 : num2;
    printf("\n max = %d" , max);
}
