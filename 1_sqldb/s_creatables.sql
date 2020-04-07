create table user_info
	(id			varchar(8), 
	 pswd		varchar(8), 
	 role		varchar(20),
	 date		varchar(20),
	 primary key (id)
	);

create table fans_info
	(id			varchar(8), 
	 nickname	varchar(40), 
	 tele		varchar(40),
	 primary key (id),
	 foreign key (id) references user_info(id)
	);
	
create table trader_info
	(id			varchar(15), 
	 name		varchar(40), 
	 tele		varchar(40),
	 id_num		varchar(40),
	 primary key (id),
	 foreign key (id) references user_info(id)
	);

create table store_info
	(id			varchar(10),
	 tra_id		varchar(8),
	 name 		varchar(40),
	 merch_type	varchar(40),
	 location	varchar(40), 
	 logo		varchar(20),
	 date		varchar(20),
	 primary key (id),
	 foreign key (tra_id) references trader_info(id)
	);
	
create table merchandise_info
	(id			varchar(20),
	 store_id	varchar(10),
	 name		varchar(40), 
	 price		varchar(8),
	 stock		varchar(8),
	 merch_size	varchar(40),
	 ad_photo	varchar(8),
	 descri		varchar(100),
	 primary key (id),
	 foreign key (store_id) references store_info(id)
	);


create table trolley_info
	(id			varchar(30), 
	 fans_id	varchar(8),
	 merch_id	varchar(8), 
	 merch_num	varchar(8),
	 elect_size	varchar(4),	
	 date		varchar(20),
	 primary key (id),
	 foreign key (fans_id) references fans_info(id),
	 foreign key (merch_id) references merchandise_info(id)
	);
	
create table transaction_info
	(id			varchar(40), 
	 tro_id		varchar(20),
	 pri_sum	varchar(10),
	 dtime		varchar(30),
	 primary key (id),
	 foreign key (tro_id) references trolley_info(id)
	);

