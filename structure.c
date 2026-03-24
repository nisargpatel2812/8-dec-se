STRUCTER :  it is a userdefined data type which is contain similiar and di-similiar elements

it is one kind of group which contains dis-similiar types of data elements

ARRAY VS STRUCTURE


array can only contains similiar types of data elements in single variable

at that time structure can contain multiple elements of diff data types in single variable


SYNTAX ::::   IT IS REPRESENT BY STRUCT KEYBOARD


   struct<structname>
{
   datatype var;
   datatype var;
};




EXAMPLE



#include<stdio.h>
struct Student
{
 	int id;
 	int score;
};

main()
{
 	struct Student s1;
 
 	s1.id= 11;
 	s1.score=90;
 
 	printf("\n id = %d",s1.id);
 	printf("\n score = %d",s1.score);

}

---

example


#include<stdio.h>
struct Student
{
 	int id;
 	char name[20];
 	char subject[20];
};

main()
{
 	struct Student s1;
 	printf(" enter student details : ");
 
 	printf("\n enter id : ");
 	scanf("\n%d",&s1.id);
 	getchar();
 	printf("\n enter name : ");
 	gets(s1.name);
 	printf("\n enter sub : ");
 	gets(s1.subject);
 
 	printf("\n student details ::");
 
 	printf("\n id : %d",s1.id);
 	printf("\n name : %s",s1.name);
 	printf("\n subject : %s",s1.subject);
 
 
}

---

#include<stdio.h>
struct Student
{
 	int id;
 	char name[20];
 	char subject[20];
};

main()
{
 	struct Student s1[3];
 	int i;
 	printf("student information :: ");
 
 	for(i=0;i<3;i++)
 	{
 		printf("enter student id : ");
 		scanf("%d",&s1[i].id);
 		getchar();
 		printf("enter student name : ");
 		gets(s1[i].name);
 		printf("enter student subject : ");
 		gets(s1[i].subject);
 		getchar();
 	}
 
 	for(i=0;i<3;i++)
 	{
 		printf("\n id : %d",s1[i].id);
 		printf("\n name : %s ",s1[i].name);
 		printf("\n subject : %s ",s1[i].subject);
 	}
}

---

#include<stdio.h>
struct Student
{
 	int id;
 	char name[20];
 	int marks[3];
};

main()
{
 	struct Student s1;
 	int i;
 	printf("student information :: ");
 	printf("enter student id : ");
 	scanf("%d",&s1.id);
 	getchar();
 	printf("enter student name : ");
 	gets(s1.name);
 
 	for(i=0;i<3;i++)
 	{
 		printf("\n enter subject (%d) marks : ",i+1);
 		scanf("%d",&s1.marks[i]);
    }
 
    printf("\nstudent details ::" );
 
 
    printf("\n id : %d",s1.id);
 	printf("\n name : %s ",s1.name);
 
 	for(i=0;i<3;i++)
 	{
 		printf("\n subject %d marks %d", i+1,s1.marks[i]);
 	}
 	printf("\n-------------------\n");

}


---

#include<stdio.h>
struct Student
{
 	int id;
 	char name[20];
 	int marks[3];
};

main()
{
 	struct Student s1[3];
 	int i,j;
 
 	printf("\n ENTER SYUDENT DETAILS :: ");
 
 	for(i=0;i<3;i++)
 	{
 		printf("\n entner student %d id : ",i+1);
 		scanf("\n%d",&s1[i].id);
 		printf("\n enter student name : ");
 		gets(s1[i].name);
 		getchar();
 	}
 
 	printf("\nSTUDENT DETAILS");
 
 	for(j=0;j<3;j++)
 	{
 		printf("\n enter student %d marks",j+1);
 		scanf("%d",s1[i].marks[j]);
 	}
 
 	printf("\n display student details ::");
 
 	for(i=0;i<3;i++)
 	{
 		printf("\n-----student %d details------",i+1);
 		printf("id : %d",s1[i].id);
 		printf("name : %s",s1[i].name);
 
 		 for(j=0;j<3;j++)
 		 printf("\n subj %d score : %d",j+1,s1[i].marks[j]);
 
 	}
}

------------------------------------------------------

NESTED STRUCTURE ::: when a structure called insude the structure there are 2 ways 


1)   struct <structurename>
     {
       field 
       struct <structinner>
       {
         field
       }innerobj;
     }outerobj;


2) struct <structure1>
   {
     
   };
     struct <2ndstructure>
     { 
       field
       struct structure1 obj;
     }obj1;

---------------------------------------------------------------------------------------------



#include<stdio.h>
struct Address 
{
	char city[20];
	int pincode;
};
struct Student
{
	int id;
	char name[20];
	struct Address add;
};
struct emp
{
	int id;
	char empname[20];
	struct Address add;
};
main()
{
	struct Student s1;
	
	printf("\nenter student id :");
	scanf("%d",&s1.id);
	
	
	getchar();
	
	
	printf("\nenter student name :");
	gets(s1.name);
	
	
	printf("\nenter student Address :");
	printf("\nenter student city :");
	gets(s1.add.city);
	
	printf("\nenter student pincode :");
	scanf("%d",s1.add.pincode);
	
	getchar();
	
}
