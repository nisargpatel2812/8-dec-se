what is database ::  it is a collection of data

- which is contain data in tabular form 

- row and colum wise we can save multiple data in single frame 

- row represent single record and colum represent specific field name of that record

e.g.

name       subject        city        pincode         (colum name)

-------------------------------------------------------------------

rakesh     MCA            indore      451234          (row)



- we can store multiple rec , retrive records specific conditon wise even we can upddate and delete
specific record condition wise

-------------------------------------------------------------------------------

SQL :: structure query language

it is programing lang

using sql wee can perform all database operation

1) create
2) read
3) update
4) delete

---------------------------------------------

login with mysql panel 

# mysql -u root -p

enter password : 


----------------------------------------------

create database syntax ::

      create databasee <databasename>;

e.g. 

    create database 8DECSE;
    
now next step to check all database;

     show databases;

now , remove database

     drop database <databse>;

e.g. 

drop databse MYDB;
show database;

----------------------------------------------------------------

now next select your datbase whuch you want to workup on it

syntax :: 

        use <databasename>;

    e.g. 
        use 8decse;

----------------------------------------------------------------

table creation :: one database can contain as many tables

e.g. 

table contain row and colum


next step : table creation 

     syntax :: 

           create table <tablename>
           (
            <column1> <tablename>,
            <column2> <tablename>,
            <column3> <tablename>
           );

    e.g. 
        create table Student
        ( 
          id int,
          name varchar(20),
          subject varchar(20),
          score int,
        );

now check table is proper createdd or not using described command

syntax :: desc <tablename>;

      e.g.  

         desc Student;

---------------------------------------------------
modify : when we change any field datatype or field size we can use after modify

syntax ::
           alter table <tablename> modify <columnname> <datatype>
        e.g. 

        alter table student modify name varchar(25);

        -> show databases;
        -> use 8decse;
        -> show tables;
        -> desc student;
        -> alter table student modify city varchar(30);
        -> desc student;
------------------------------------------------------
alter rename student ::   when we want to change column name using of rename commmand

syntax:: 

            alter table <tablename> rename column <columnname> to <new columnname>;

e.g. 
             alter table student rename coulmn score to marks;


---------------------------------------------------------------------------

DDL :: data defination language

to create STRUCTER of database and table we use DDL commands using below command
we can create structure we can addd and remove fields we can remove table or wee can rename
it using DDl commands

1) create
2) alter
3) drop
4) truncate
5) rename

==================================================
alter : alter command is most important part of DDL commands

using alter command we can add,remove,modify fieldes of table.

a)add 
b)drop
c)modify

a)add:: 
e.g. 
syntax : 
alter table <tablename> <altercommand> fieldname datatype 

e.g. 

-->alter table student add city varchar(20);
-->decs student;

b)drop::
e.g. 
syntax : 
alter table <tablename> <altercommand> fieldname datatype 

eg..

alter table student drop dummy;
desc student;



==================================================

3) drop :: to delete table or databasse from the memory we can use drop command

syntax :: drop table <tablename>;
                 or
          drop databses <databases>;

          e.g. 



4) truncate : drop delete table and colomn from the memory completly but using of truncate command
              we can remove all records from the table but structure remains the same 

              means using of truncate we dont need to recreate table but using of drop command 
              we have to create table first and re enter the data 

              truncate is faster then drop bcoz it delete all the data from the table 

    e.g.
         drop : account delete 
         truncate : deleate order history or serach history...

         syntax :: truncate table <tablename>;

         e.g. 

         create tabel dummy
         (
            id int,
            name varchar(20)
         );



5) rename :: when we want to change table name we use rename 

syntax :: rename table <oldtablename> to <newtablename>;

e.g.  :: rename table dummy to dummy1;
         show tables;

NOTE :: we can also renamne by alter 

syntax :: alter table <oldname> rename to <newname>;

e.g. alter table dummy rename to dummy1;

-----------------------------------------------------------

DML :: data manipulatio langaguge

1) insert
2) update
3) delect
4) select

1) insert :: it is used to store record in existing table using of specific column wise
syntax :: insert into <tablename> (columnname1,columnname2..)
            values
                (value1,value2..);

    e.g. :: 
            insert into student
            (id,name,subject,marks,city)
              values
            (1,'ajay','ss',90,'ahemdabad');

    DQL :  SELECT ::

             to retrive all records from table 

              syntax :: select * from <tablename>;

    e.g. :: select * from student;

    can store multiple records using single commands

     insert into * student
     (id,name,subject,score,city)
     values
     (1,'ajay','python',90,'ahemdabad'),
     (4,'riya','java',89,'surat'),
     (3,'raj','node',78,'bopla');


without adding and column and command 

=> insert into student 
values
(4,'kishan','python',45,'ahemdabad');

select * from student;





constraints : constraints means we can prevent unwanted records in database 

        we can restrict data from outside the world. 

        constraint :: 1) not null
                      2) default
                      3) unique
                      4) primary key
                      5) auto_increament
                      6) check
                      7) foregin key 

1) NOT NULL : when we add any field as a not null means at a insert time we cant skip this field. 

        bydefault all fields are null if we want to specify specific field 
        with not null we can follow below syntax : 

        syntax : 

            create table <tablename>
            {
                fieldname datatype(size)  not null,
                .
                .
            };
        
        e.g. 
        => create table dummy1
             (
                id int,
                name varchar(20) not null
             );

        => desc dummy1;

        => insert into dummy1 (id) values (1);
           ERROR 1364 (HY000): Field 'name' doesnt have a default value

           what is meaning of not null : this field cant be null this is mandatory. 

        => alter table dummy1 modify name varchar(20) null;
            Query OK, 0 rows affected (0.07 sec)
        
        => insert into dummy1 (id) values (1);
            Query OK, 1 row affected (0.01 sec)

        =>  select * from dummy1;
            +------+------+
            | id   | name |
            +------+------+
            |    1 | NULL |
            +------+------+
            1 row in set (0.00 sec)

        => now, i want to change name field null to not null 

        => truncate table dummy1;

        => alter table dummy1 modify name varchar(20) not null;

        desc dummy1;
        +-------+-------------+------+-----+---------+-------+
        | Field | Type        | Null | Key | Default | Extra |
        +-------+-------------+------+-----+---------+-------+
        | id    | int         | YES  |     | NULL    |       |
        | name  | varchar(20) | NO   |     | NULL    |       |
        +-------+-------------+------+-----+---------+-------+


2) Default : when we want to define default value to specific column we can use default constraints 

        so, by default it will consider default value 

        syntax : 

            create table <tablename>
            (
                fieldname  datatype  default  <defaultvalue>
            );

        e.g. 
         create table dummy2
         (
         id int,
         name varchar(20),
         status varchar(20) default "ACTIVE"
         );

        => insert into dummy2 (id,name)
             values
             (1,'aaa'),
             (2,'bbb');

        desc dummy2;
+--------+-------------+------+-----+---------+-------+
| Field  | Type        | Null | Key | Default | Extra |
+--------+-------------+------+-----+---------+-------+
| id     | int         | YES  |     | NULL    |       |
| name   | varchar(20) | YES  |     | NULL    |       |
| status | varchar(20) | YES  |     | ACTIVE  |       |
+--------+-------------+------+-----+---------+-------+

        =>  select * from dummy2;
+------+------+--------+
| id   | name | status |
+------+------+--------+
|    1 | aaa  | ACTIVE |
|    2 | bbb  | ACTIVE |
+------+------+--------+

        => using of default constraint alter command 

        => alter table dummy2 add created_at TIMESTAMP default CURRENT_TIMESTAMP;

        select * from dummy2;
        +------+------+--------+---------------------+
        | id   | name | status | created_at          |
        +------+------+--------+---------------------+
        |    1 | aaa  | ACTIVE | 2026-03-03 09:54:22 |
        |    2 | bbb  | ACTIVE | 2026-03-03 09:54:22 |
        +------+------+--------+---------------------+
        2 rows in set (0.00 sec)


        =>  alter table dummy2 modify status varchar(20) default "PENDING";

        => insert into dummy2 (id,name)
        -> values
        -> (3,'aaasss');
        

        mysql> select * from dummy2;
        +------+--------+---------+---------------------+
        | id   | name   | status  | created_at          |
        +------+--------+---------+---------------------+
        |    1 | aaa    | ACTIVE  | 2026-03-03 09:54:22 |
        |    2 | bbb    | ACTIVE  | 2026-03-03 09:54:22 |
        |    3 | aaasss | PENDING | 2026-03-03 09:57:05 |
        +------+--------+---------+---------------------+
    

3) UNIQUE ::  unique constraints means we want to make specific column unique  means 
             we wont to store duplicate values in unique column
             
             it meanss one timw blank value and one time null value consider 

    e.g. mobile num , email , adharcar etc....

    -> use 8decse;
    -> create table dummy1;
       (
        id int,
        email varchar (20) unique,
        phone int unique,
        status varchar(20) default "de-active"
       );

    -> desc dummy1;









    -> insert into dummy1 (id,email,phone)
       values
       (1,a@gmail.com,45454545),
       (2,b@gmail.com,55665656);




select * from dummy1;







->insert into dummy1(id,email,phone)
  values
  (3,a@gmail.com,78787878);

-->> HERE WILL BE ERROR OF SAME EMAIL (UNIQUE)

4) PRIMARY KEY ::  it is most powerfull concept of sql constraints 
                   using of it we can make any column unique column but 
                   but PK we can aplly on single field of table
        
UNIQUE                                             PRIMARY KEY

many column                                        only one column
can accept blank\null                              not accept null\blank

e.g. email,phone,adharcar...                     e.g. id,rollnumber,enroll_id....


syntax :: 
            create table <tablename>
            (
                fieldname datatype primary key,
                .
                .
            )

            USING OF ALTER COMMAND 

            alter table <tablename> add primary key (fieldname);

e.g. :: 

         create table dummy1
         (
            id int primary key,
            name varchar(20)
         );

         desc dummy1;





         ->alter table dummy1 drop primary key;
        

         desc dummy1;






         -> alter table dummy1 add primary key (id);


5) AUTO INCREAMENT ::  when we want to aplly and field to start auto increament without accept
                    value from the user it generate auto indexes in field value

    syntax :: 
              create table <tablename>
              (
                fieldname datatype auto_increament,
                .
                .
              );


    alter table student modify id int primary key auto_increament;

    desc student;







    insert into dummy1
    (name,subject,marks,city)
    values
    ('nisarg','python',90,'abad')
    ('raj','java',89,'surat');

 
6) check :: it is contraints which is mainly used to apply restriction on specific field 
            for e.g. emp table we can allow only more than 18yr old emp

            syntax ::
                       filename Check fieldname condition;

                => create table user 
                (
                    id int primary key auto_increament,
                    name varchar(20),
                    age int check (age>18)
                );

                or

            => alter table user add column age int check (age>18);
            => desc user;
            
            




            => insert into user (id,name,age)
               values
               (1,'raj',20);

            => select * from user;

            => insert into user (id,name,age)
               values
               (2,'ran',4);4

        => alter table user drop column age;

        => alter table user add column age int;
        
        => alter table user add constraint check_age check(age>18);

         add unique constraint name using of alter command
        
        => alter table user add constraint user_pk primary key(id);
        
        => alter table user drop primary key;


-----------------------------------------------------------

DCL :: data conrol lang

1) grant
2) revoke

-----------------------------------------------------------

DQL :: data query lang 

1) select

------------------------------------------------------

TCL :: transaction control language

1) commit 
2) rollback
3) savepoint


--------------------------------------------------------------------------------------

1) INNER JOIN :: inner join which is return only matching element from the both tables

insert into tbl_order (cust_id,pro_id)
values 
(7,2),
(6,8);

=> select * from tbl_order;





==> select * from user;





=> select user.u_name,tbl_order.pro 
     -> from user
     -> inner join tbl_order
     -> on user.id = tbl_order.cust_id;




=======================================================================================================

2) left join : it take all the record from the left table and display matching values from the right table

               it there is no records in table it shows null

    select user.u_name,tbl_order.pro_id
    -> from user
    -> left join tbl_order
    -> on user.id = tbl_order.cust_id;






3) RIGHT JOIN :: it fetch all record from the right table and try to match with left table

     select * from user
     -> right join tbl_order
     -> on user.id = tbl_order.cust_id;

4) OUTER JOIN :: fetch all records which is not match

5) full join :: fetch all matching records from left and right side 

          in simple lang we can say that full join combination of left and right join

          in mysql full join is not working 

          solution we can combine left join and right join result
          
          using of UNION concept

------------------------------------------------------

UNION ::  to combinne 2 tables without duplicates value we can use union 

creat table A 
(
    name varchar(20)
);

insert into A 
values
('ajay'),
('ravi'),
()