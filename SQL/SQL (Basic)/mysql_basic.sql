
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

--Weather Observation Station 2
SELECT ROUND(SUM(LAT_N), 2), ROUND(SUM(LONG_W), 2)
FROM STATION;

--Weather Observation Station 3

--Weather Observation Station 4

--Weather Observation Station 6

--Weather Observation Station 7

--Weather Observation Station 8

--Weather Observation Station 9

--Weather Observation Station 10

--Weather Observation Station 11

--Weather Observation Station 12

--Weather Observation Station 13

--Weather Observation Station 14

--Weather Observation Station 15

--Weather Observation Station 16

--Weather Observation Station 17

--Weather Observation Station 18

--Weather Observation Station 19

--Higher Than 75 Marks

--Employee Names

--Employee Salaries

--Average Population

--Japan Population

--Population Density Difference

--The Blunder

--Top Earners

--Population Census

--African Cities

--Average Population of Each Continent