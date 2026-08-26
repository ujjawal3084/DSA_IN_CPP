/* Write your PL/SQL query statement below */
SELECT c.name AS Customers from customers c  left join orders o 
ON c.id = o.customerId
WHERE o.id IS NULL;