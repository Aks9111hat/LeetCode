# Write your MySQL query statement below
SELECT
    Employee.name, Bonus.bonus
FROM
    Employee
        LEFT JOIN
    Bonus ON Employee.empid = Bonus.empid
    where bonus < 1000 OR bonus IS NULL
;