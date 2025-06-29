# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below
DELETE E1 FROM person AS E1  
INNER JOIN person AS E2   
WHERE E1.id>E2.id 
AND E1.email=E2.email;  