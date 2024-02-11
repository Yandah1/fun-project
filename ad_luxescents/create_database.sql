-- create_database.sql

CREATE USER 'yandah'@'%' IDENTIFIED BY 'yourstrully'; --did not run
GRANT ALL PRIVILEGES ON ad_luxe_db.* TO 'yandah'@'%';
FLUSH PRIVILEGES;
