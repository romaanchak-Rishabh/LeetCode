# Write your MySQL query statement below
select name AS Customers FROM CUSTOMERS WHERE ID NOT IN (SELECT DISTINCT CUSTOMERID FROM ORDERS)