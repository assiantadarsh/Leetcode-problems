# Write your MySQL query statement below

SELECT MAX(salary) AS SecondHighestSalary
FROM (
    SELECT salary ,
    DENSE_rank() OVER (ORDER BY salary DESC) AS rnk
    FROM Employee
) Second

WHERE rnk = 2;