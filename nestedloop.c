NESTED LOOP :

when loop call inside the another loop

SYNTAX :  for(initialization;condtion;updtation)

          {
            for(initialization;condtion;updtation)
            {
            }
          }

---

#include <stdio.h>

 void main()
 {
     int row,col,num = 65;
     for(row = 1;row <= 5;row++)
     {
        for(col = 1;col <= row;col++)
        {
            printf(" %c " , num);
            num++;
 
        }
          printf("\n");
     }
 }

---


left angle

#include<stdio.h>

int main() {
    int row, col;

    for(row = 1; row <= 5; row++)
   {
        for(col = 1; col <= row; col++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
 

---

left angle

#include<stdio.h>

void main()
{
    int row,col;
 
    for(row = 5 ; row >=1 ; row--)
    {
        for(col = 1 ; col<= row ; col++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}

---

ARRAY


#include <stdio.h>

void main()
{
    int row,col;
 
    for(row = 1 ; row < 5; row++)
    {
        for(col = 1 ; col<= row ; col++)
        {
            printf(" * ");
        }
        printf("\n");
    }
 
    for(row = 5 ; row >=1 ; row--)
    {
        for(col = 1 ; col<= row ; col++)
        {
            printf(" * ");
        }
        printf("\n");
    }
 
---

DO WHILE:


it is an exit controlled loop - it check condition at exit level.

so there are at least 1 possibility of that execute 1 time of condition goes false

SYNTAX:

initialization
do
{

statement ;
updatation;


} while(condition) ;

example

#include <stdio.h>

void main()
{
    int i = 6;
    do
    {
        printf("\n%d", i);
        i++;
    }
    while(i <= 5);
}
 
---


/*
#include <stdio.h>

void main()
{
    int row,col;
 
    for(row = 5 ; row >=1 ; row--)
    {
        for(col = 1 ; col<= row ; col++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}
*/



#include <stdio.h>

void main()
{
    int row,col;
 
    for(row = 1 ; row < 5; row++)
    {
        for(col = 1 ; col<= row ; col++)
        {
            printf(" * ");
        }
        printf("\n");
    }
 
    for(row = 5 ; row >=1 ; row--)
    {
        for(col = 1 ; col<= row ; col++)
        {
            printf(" * ");
        }
        printf("\n");
    }
} ;



/*
#include <stdio.h>

void main()
{
    int i = 1;
    do
    {
        printf("\n%d", i);
        i++;
    }
    while(i <= 5);
}
  */


/*
#include <stdio.h>
void main()
{
    int i = 6;
    do
    {
        printf("\n%d", i);
        i++;
    }
    while(i <= 10);
}
*/