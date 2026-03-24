LOWER CASE ND UPPER CASE


WHEN WE WANT TO CONVERT ANY CHARACTER INTO LOWER CASE THERE IS ONE METHOD :::: tolower()

and into uppercase there is one method :::: toupper()

but the methods are connected with same header file is ctype header file

EX:::  #include<ctype.h>

EXAMPLE :::


#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char name[20];
    int i;
 
    printf("enter your name : ");
    gets(name);
 
    printf("name : %s",name );
 
    for(i=0;name[i] !='\0';i++)
    {
        name[i] = tolower(name[i]);
    }
    printf("\n %s",name);
 
    return 0;
}

---


#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char name[20];
    int i;
 
    printf("enter your name : ");
    gets(name);
 
    printf("name :%s",name );
 
    for(i=0;name[i] !='\0';i++)
    {
        if(name[i] >= 'a' && name[i] <= 'z')
        {
         name[i] = name[i] - 32;
        }
    }
    printf("\n %s",name);
 
    return 0;
}