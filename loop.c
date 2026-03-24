2)WHILE LOOP :  it is an entry controlled loop 
              --> it check condition at entry level and if condition goes true loop will execute.

syntax : initialization
         while(condition)
         {
           statement:
           updatation;
         }
example :  

#include<stdio.h>
void main()
{
    int i;
    i = 1;
    while(i<=5)
    {
    printf(" \t %d " , i);
    i++;
    }
}   

--------------------------------------------------------------------

#include<stdio.h>
#include<stdbool.h>
void main()
{
    bool flag = true;
    int num;
    char choice;
    
    while(flag)
 {
    printf("\n enter a num : ");
    scanf("%d", &num);
    
    printf("\n if you want to continue press 'y' and not then press 'n' : );
    scanf("%c", &choice);
    
    if(choice=='y')
    {
        flag = true;
    }
    else
    {
        flag = false;
    }
    
 }
}   

=----------------------------------------------------------------------------------

#include<stdio.h>
#include<stdbool.h>
void main()
{
    int num;
    int sum = 0;
    char choice;
    bool status = true;
    
    while(status)
    {
        printf("enter a num : ");
        scanf("%d" , &num);
        printf("do you want to continue press y for yes : ");
        scanf(" %c" , &choice);
        
        if(choice == 'n')
        {
            status = false;
        }
        sum+=num;
    }
    printf("\n total %d" ,sum);
}

-------------------------------------------------------------------------------

#include <stdio.h>

void main()
{
    int num;
    int f = 1;
    int i = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (i <= num)
    {
        f *= i;
        i++;
    }

    printf("factorial = %d", f);

}
  