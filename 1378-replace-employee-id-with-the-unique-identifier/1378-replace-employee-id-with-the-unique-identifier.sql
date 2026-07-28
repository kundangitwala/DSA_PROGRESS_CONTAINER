# Write your MySQL query statement below
-- select something from table 
-- join on which table
-- on related col between them
select unique_id,name from Employees
left join EmployeeUNI
on Employees.id=EmployeeUNI.id;