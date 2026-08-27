# Write your MySQL query statement below

-- SELECT 
-- p.firstName,
-- p.lastName,
-- a.city,
-- a.state
-- FROM person as p
-- LEFT JOIN Address as a
-- ON p.personId = a.personId;

select firstName, lastName, city, state from Person  left  join Address 
on Person.personID=Address.personID