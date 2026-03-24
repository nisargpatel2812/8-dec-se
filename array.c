ARRAY :

        array is collection of numbers
 
        in simple langaguge we can saay that in simple way that a single variable can contain single value but in arrawy
        we can store multiple values in single variable
 
        e.g. int a = 10; simple variableint a = 10,20,30,     X
 
 
        syntax :
 
        in c lang arraw represent by {} braces
 
        and we have to provide size of array
 
        e.g. int a[5] = {};
 
example :


#include<stdio.h>
void main()

{
    // int =13,12,45,,,,,
    //arraw is always start from 0
    //syntax..............


    int a[5] = {13,65,45,98,12};
 

    //access array element
    printf(" \n %d ", a[3]);  // access 1st or 0 index value num........
 
    printf(" \n %d ", a[4]);

 
}


example with for loop :

#include<stdio.h>
void main()

{
    int a[5] = {13,65,45,98,12};
 
    int i;
 
    for(i = 0; i<5 ; i++)
 
    printf(" \n element (%d) : %d ",i+1, a[i]);
}



ex with scan f :


#include<stdio.h>
void main()

{
    int a[5];
 
    int i;
 
    for(i = 0; i<5 ; i++)
    {
    printf("enter a number (%d) : " , i+1);
    scanf("%d" , &a[i]);
    }

    printf("\n-----------------\n");
 
 
    for(i = 0; i<5 ; i++)
    {
    printf(" \n element (%d) : %d ",i+1, a[i]);
    }
}


example :


#include<stdio.h>
void main()

{
    int a[5];
    int sum=0;
    int i;
 
    for(i = 0; i<5 ; i++)
    {
    printf("enter a number (%d) : " , i+1);
    scanf("%d" , &a[i]);
    sum += a[i];
    }

    printf("\nresult = %d",sum);
}

---
#include<stdio.h>
void main()

{
   int a[5] = {12,46,89,74,32};
   int max;
   int i;
   max = a[0];

   for(i = 1; i<5 ; i++)
   {
       if(a[i] > max)
       {
           max = a[i];
       }
   }

   printf("\n max value is =  %d", max);
}

------------------------------------------------------------

types  :::


types of array:

there are 12 types of array

1)single dimensional : 1D array  ::: []

2) multi : 2D , 3D   ::: [][],[][][]



EX :A

#include<stdio.h>
void main()
{
    // array[row][col];
 
int a[2][3] =
{
    {10,20,30},
    {40,50,60}
 
};

printf("\n %d" , a[0][2]);

}
=========================================
EX :::

 #include<stdio.h>
void main()
{
    // array[row][col];
 
int a[2][3] =
{
    {10,20,30},
    {40,50,60}
 
};
    int row,col;
    for(row = 0 ; row < 2 ; row++)
    {
        for(col = 0 ; col < 3 ; col++)
        {
            printf("%d" , a[row][col]);
        }
        printf("\n");
    }


}

---

ascending order
or
sorting  array

eg a[5] = [7,6,9,2,8]

small to big

a[5] = [3,7,9,2,8]


0th position > 1st position

if(a[0] > a[1])
{
    temp = a[0]
    a[0} = a[1]
    a[1] = temp
}

========================

#include<stdio.h>
void main()
{
    int a[5] = {12,3,4,5,6};
    int i,j,temp;
 
    for(i = 0 ; i < 5 ; i++)
    {
        for(j = i+1 ; j < 5 ; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
 
    for(i = 0 ; i < 5 ; a[i]);
    {
        printf("%d" , a[i]);
    }
}

===============================

#include<stdio.h>
int main()
{
    char str[10] = "INDIA";
    int i,j;
 
    for(i=0;i<5;i++)
    {
        for(j = 0; j<=i ; j++)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }
    return 0;
}