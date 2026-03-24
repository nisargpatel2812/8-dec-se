FILE HANDLING :: when we create any var it store memory in temp format when we close program it
                 destroy memory

memory place area is ram not hardisk

int a = 10;

-------------
but after sometimes if i wnat to access memory or value we cant access it so, at that time we have to 
value or memory in hardisck area

e.g.  zoom aapp  - character


FILE HANDLING :: to store var value in specific file and to open this kind file and close file 
                 there are two types of file


                 1)text
                 2)binary

NOTE :: file handling is which is connected with memory loc - so , it required adddress 
        so,we here we use file pointer concept
        
        int a=10;
        char name[20];

        file *fp;    here file retrive from <stdio.h> header file
         

-----------------------------------------------

fopen(): to open specific file 
        syntax : fopen("filename","mode")

fclose : to close file
        syntax : fclose(fp)

fprintf() : to write something in file
          
fsccanf() : to read from file

r = read
w = write

EXAMPLE :: 

#include<stdio.h>
main()
{
	FILE *fp;
	
	fp = fopen("myfile.txt","a"); 
	
	if(fp == NULL)
	{
		printf("file not found");
		return 0;
	}
	
	fprintf(fp,"NAME : c++ DEVLOPER\n");
	fprintf(fp,"MARKS : 45 \n");
	
	printf("SUCCSESSFUL");
	fclose(fp);
}

----------------------------------------------------------------

fgetc(fp) :: this method accept single char from file

EOF : end of file : it is indicating that ur file is end now.

#include<stdio.h>
main()
{
	FILE *fp;
	char ch;
	
	fp = fopen("myfile.txt","r");
	   
	while((ch=fgetc(fp)) != EOF)
	{
		printf("%c",ch);
	}
	
	fclose(fp);
}

-----------------------------------------------------------------

#include<stdio.h>
main()
{
	FILE *fp;
	char name[20];
	char subject[20];
	
	fp = fopen("myfile2.txt","w");
	   
	printf("enter name : ");
	gets(name);
	
	printf("enter subject : ");
	gets(subject);
	
	fprintf(fp,"name : %s\n",name);
	fprintf(fp,"subject : %s",subject);
	
	printf("done");
	
	fclose(fp);
}