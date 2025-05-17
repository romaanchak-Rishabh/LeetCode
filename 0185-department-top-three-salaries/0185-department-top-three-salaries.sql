# Write your MySQL query statement below
with cte as (select D.name as Department,E.name as Employee, E.Salary from Employee E join Department D on E.departmentId=D.id )
select Department,Employee,Salary from (select *,dense_rank() over(partition by Department order by Salary desc)rnk from cte)A where rnk<4