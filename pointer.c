POINTER :::  it is a a variable which contains anothee var memory address


EXAMPLE :: 
 A  :  101    201   
       102    202


------------------------------------------------------------------------------------

in c programing whenever we create any new var it is assign to a specific memory

     int a = 10


             101  = address
             
         a = 10   ==  value



#include<stdio.h>
main()
{
	int a = 10;
	int *p;
	
	printf("\n\n a = %d", &a);
	
	printf("\n\n address of a = %d",&a);
	
	p = &a;
	
	printf("\n\n adrrdress of p =%d", *p);
	printf("\n\n fetch value from address = %d",*p);
	
	*p = 200;
	
	printf("\n\n after change in address value : %d ",*p);
	printf("\n\n a variable value %d",a);
}
