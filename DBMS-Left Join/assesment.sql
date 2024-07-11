use yogesh;
CREATE TABLE country (id int PRIMARY KEY AUTO_INCREMENT,country_name text NOT null, country_name_eng text NOT null,country_code text NOT null);

INSERT INTO country (country_name,country_name_eng,country_code)VALUES 
("Deutschland","Germany","DEU"), ("Srbija","Serbia","SRB"), ("Hrvatska","Croatia","HRV"),
("United States of America","United States of America","USA"), ("Polska","Poland","POL"), 
("Espana","Spain","ESP"), ("Rossiya","Russia","RUS");

CREATE TABLE city 
(id int PRIMARY KEY AUTO_INCREMENT,city_name text,lat float,lon
float,country_id int, FOREIGN KEY city(country_id)REFERENCES country(id));

INSERT INTO city (city_name,lat,lon,country_id)VALUES 
("Berlin",52.52,23.40,1),
("Belgrade",44.78,20.45,2),
("Zagreb",45.81,15.96,3),
("New York",40.73,-73.93,4),
("Los Angeles",34.05,-118.24,4),
("Warsaw",52.23,21.01,5);

CREATE TABLE Custom (id int PRIMARY KEY AUTO_INCREMENT, 
cus_name text NOT null, city_id int not null, cus_add text, next_call_date date, 
ts_inserted datetime NOT null,FOREIGN KEY Custom(city_id) REFERENCES city(id));

INSERT INTO custom(cus_name,city_id,cus_add,next_call_date,ts_inserted)
VALUES("Jewelry Store",4,"Long Street 120",'2020-02-21','2020-02-09 14:01:20.000'),
("Bakery",1,"Kurfur 25",'2020-02-21','2020-01-09 17:52:25.000'),
("Cafe",1,"Taunti 44",'2020-01-21','2020-01-09 08:02:49.000'),
("Rastaurant",3,"Ulica lipa 15",'2020-01-21','2020-01-10 09:20:21.000');

SELECT country.id,country.country_name_eng,city.city_name,custom.cus_name FROM country 
LEFT JOIN city ON country.id=city.country_id
LEFT JOIN custom ON city.id=custom.city_id;

SELECT city.id,country.country_name_eng,city.city_name,custom.cus_name FROM city 
LEFT JOIN country ON  country.id=city.country_id 
LEFT JOIN custom ON city.id=custom.city_id ORDER BY city.id;


