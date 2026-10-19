# Write your MySQL query statement below
SELECT e1.name FROM Employee AS e1 INNER JOIN Employee AS e2 ON e1.id = e2.managerId GROUP By e2.managerId
HAVING count(e2.managerId) >= 5; 