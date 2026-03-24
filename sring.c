# string : 



string is collection of characters 



in simple lang we can say that string is a one kind of array



or we can say that chara of array





synt6ax : char name \[size]= {}



 or 



chae\[6]= {'h','e','l','l','o','\\0'};



--------------------------------------------------------------



# STRLEN() 



by this method we can find the length of string







## CODE : 



#include <stdio.h>



int main()

{

    char size[10] = {'h','i','i','i','i','i'};
    int i; 
    int length = 0;

    for(i = 0; size[i] != '\0'; i++)
    {
        length++;
    }
    
    printf("Length of string = %d", length);

    return 0;
}
----------------------------------------------------------



\#include <stdio.h>

\#include<string.h>

int main()

{
    char name[50];

    

    printf("enter your name : ");

    //scanf("%s" , \&name);

    

    gets(name);

    

    //getchar()

    

        printf("\\n name  = %s", name);



        printf("\\n length = %d" , strlen(name));



    

    return 0;

}



----------------------------------------------------------



# STRCAT() : 



STRING CONCATENATION 



when we want to join or combine 2 string  we can use this inbuilt fun :: strcat()





code :::::



\#include <stdio.h>

\#include<string.h>

int main()

{

    char s1\[10] = "hello";

    char s2\[10] = "world";

    

    printf("\\n result = %c" , );

    

    return 0;

}



----------------------------------------------------------



#include <stdio.h>

#include<string.h>

int main()

{

    char s1\[10] = "hello";

    char s2\[10] = "world";

    

    int i = 0,j=0;

    

    while(s1\[i]!='\\0')

    {

        

        i++;

    }

    printf("\\n %d", i);

    

    while(s2\[j] != '\\0')

    {

        s1\[i] = s2\[j];

        i++;

        j++;

    }

    

    printf("\\n result : %s" , s1);



    

    return 0;

}

---------------------------------------------------------

STRING COMPARISON:



#include<stdio.h>
#include<string.h>

int main()
{
 	char s1[10];
 	char s2[10];
 
 	printf("enter string 1 : ");
 	gets(s1);
 
 	printf("enter string 2 : ");
 	gets(s2);
 
 	if(strcmp(s1,s2) == 0)
 	{
 		printf("\n same");
 	}
 	else
 	{
 		printf("differnt");
 	}
 	return 0;
}

---

#include<stdio.h>
#include<string.h>

int main()
{
 	char s1[10];
 	char s2[10];
 
 	int flag=0,i=0;
 
 	printf("enter a string 1 : ");
 	gets(s1);
 	printf("enter a string 2 : ");
 	gets(s2);
 
 	while(s1[i] != '\0' || s2[i] != '\0')
 	{
 		if(s1[i] != s2[i])
 		{
 			flag==1;
 		}
 		i++;
 	}
 	if(flag==1)
 	{
 		printf("\nsame");
 	}
 	else
 	{
 		printf("\ndifferent");
 	}
 
 
 	return 0;
}

---
