
--Revising the Select Query I
SELECT * FROM CITY
WHERE POPULATION > 100000 AND COUNTRYCODE = 'USA';

--Revising the Select Query II
SELECT NAME FROM CITY
WHERE COUNTRYCODE = 'USA' AND POPULATION > 120000;

--Select All
SELECT * FROM CITY;

--Select By ID
SELECT * FROM CITY
WHERE ID = 1661;

--Japanese Cities' Attributes
SELECT * FROM CITY
WHERE COUNTRYCODE = 'JPN';

--Japanese Cities' Names
SELECT NAME FROM CITY
WHERE COUNTRYCODE = 'JPN';

--Weather Observation Station 1
SELECT CITY, STATE FROM STATION;

--Weather Observation Station 2
SELECT ROUND(SUM(LAT_N), 2), ROUND(SUM(LONG_W), 2)
FROM STATION;

--Weather Observation Station 3
SELECT DISTINCT CITY FROM STATION
WHERE ID % 2 = 0;

--Weather Observation Station 4
SELECT COUNT(CITY) - COUNT(DISTINCT CITY)
FROM STATION;

--Weather Observation Station 6
SELECT DISTINCT CITY FROM STATION
WHERE CITY REGEXP '^[aeiou]';

--Weather Observation Station 7
SELECT DISTINCT CITY FROM STATION
WHERE CITY REGEXP '[aeiou]$';

--Weather Observation Station 8
SELECT DISTINCT CITY FROM STATION
WHERE CITY REGEXP '^[aeiou].*[aeiou]$';

--Weather Observation Station 9
SELECT DISTINCT CITY FROM STATION
WHERE CITY REGEXP '^[^aeiou]';

--Weather Observation Station 10
SELECT DISTINCT CITY FROM STATION
WHERE CITY REGEXP '[^aeiou]$';

--Weather Observation Station 11
SELECT DISTINCT CITY FROM STATION
WHERE CITY REGEXP '^[^aeiou]|[^aeiou]$';

--Weather Observation Station 12
SELECT DISTINCT CITY FROM STATION
WHERE CITY REGEXP '^[^aeiou].*[^aeiou]$';

--Weather Observation Station 13

--Weather Observation Station 14

--Weather Observation Station 15

--Weather Observation Station 16

--Weather Observation Station 17

--Weather Observation Station 18

--Weather Observation Station 19

--Higher Than 75 Marks
SELECT Name FROM STUDENTS
WHERE Marks > 75
ORDER BY RIGHT(Name, 3), ID;

--Employee Names
SELECT name FROM Employee
ORDER BY name;

--Employee Salaries
SELECT name FROM Employee
WHERE salary > 2000 AND months < 10
ORDER BY employee_id;

--Average Population
SELECT FLOOR(AVG(POPULATION))
FROM CITY;

--Japan Population

--Population Density Difference

--The Blunder

--Top Earners

--Population Census

--African Cities

--Average Population of Each Continent