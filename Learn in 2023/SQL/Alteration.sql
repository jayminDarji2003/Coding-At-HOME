create table Account(
	id int primary key not null,
    name varchar(255),
    email varchar(255) unique,
    age int check(age > 18),
    balance int default 0
);

insert into account(id,name,email,age)
values(1,'Deepak',"deep@gmail.com",19 );
	
insert into account(id,name,email,age)
values(2,'jeel','jeel@gmail.com',19);

insert into account(id,name,email,age)
values(3,'deep','jeell@gmail.com',19);

insert into account(id,name,email,age)
values(4,'deep','jeeel@gmail.com',18);

select * from account;


-- alter operations
-- Add : to add new column
alter table Account add Interest_rate float not null default 6.66;

-- Modify : to change data type of column
alter table Account modify Interest_rate double; 

-- Change column - remane column
alter table Account change column Interest_rate interest float not null default 6.68; 

-- Drop column : delete column
alter table Account drop column interest;

-- Rename table name : RENAME TO
alter table Account rename to Account_details;

-- describe account
desc Account_details;









































