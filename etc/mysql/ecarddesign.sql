CREATE TABLE Users (
id int primary key auto_increment,
email varchar(64) not null,
password varchar(32) not null,
names varchar(64) not null,
lastnames varchar(64) not null
) Charset=latin1;
