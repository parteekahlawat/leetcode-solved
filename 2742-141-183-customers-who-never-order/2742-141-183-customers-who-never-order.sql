# Write your MySQL query statement below
select name as Customers
from Customers as C
left join Orders as O
on C.id=O.customerId
where O.customerId is Null