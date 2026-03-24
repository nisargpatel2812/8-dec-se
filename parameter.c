/*Actual pm and foremal pm

formal pm: it pass in function ddefination time

actual : pass at function calling time

ex:  

void sun(int a,int b)  // formal

{
    ans = a+b;
    printf("ans=%d",ans);
}
void main()
{
    int a= 10,b=20;
    sum(a,b); //actual
}*/

----------------------------------------------------------------------------------------


/*CALL BY VALUE :: IT IS A MOST powerfull concept of function and pointer topic 

it does not change atual pm if we apply changes in formal pm

in call by value wwe just passing the copy of value not passing actual pm
 */
#include<stdio.h>
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;

}

main()
{
    int a=10,b=20;

    printf("\n before changes in swap func :");
    printf("\n a=%d and b=%d",a,b);

    swap(a,b);

    printf("\n after changes in swap func :");
    printf("\n a=%d and b=%d",a,b);

}
--------------------------------------------------------------------------------

/*CALL BY REFRENCE :: when we pass actual pm in function calling time and appy changes in formal pm it direct affect actual pm

bcuz insted of passing copy of value here we are passing address of parameters.
*/
#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}

main()
{
    int a=10,b=20;

    printf("\n before changes in swap func :");
    printf("\n a=%d and b=%d",a,b);

    swap(&a,&b);

    printf("\n after changes in swap func :");
    printf("\n a=%d and b=%d",a,b);

}

#include<stdio.h>
 main()
 {
    int arr[5]={12,5,4,3,9};
    int i;
    int *p
    p = arr;
    for()
 }


 #include<stdio.h>
 main()
 {
    int arr[5]={12,5,4,3,9};
    int i;
    int *p
    int sum =0;

    p = arr;
    for(i=0;i<5;i++)
    {
        sum += *(p+i);
    }
    printf("\n sum = %d", sum);
 }


 #include<stdio.h>
 main()
 {
    int arr[5]={12,5,4,3,9};
    int i;
    int *p
    int max,i;

    p = a;
    
    max = *p;

    for(i=1;i<5;i++)
    {
        if(a[i] > max)
        {
            max = a[i]
        }
        if(*(p+i) > max)
        {
            max = *(p+i);
        }
    }
    printf("\n max = %d",max)
 }

 #include<stdio.h>
 struct Student
 {
    int id;
    char name[10];
 };

 main()
 {
    //structure var declaration
    struct Student s1;

    //pointer var decc
    struct Student *p=&s1;

    //note : when we access structure member using of stucture va we have to use . (dot operator)
    //e.g. s1.namae , s1.marks

    //note :: when we want to access structure member using of pointer 
    //var we have to use ->(arrow operator)
    //e.g. p1->name , p1->marks

    printf("enter id : ");
    scanf("%d",&p->id);
    getchar();
    printf("enter name : ");
    gets(p->name);
 }






 