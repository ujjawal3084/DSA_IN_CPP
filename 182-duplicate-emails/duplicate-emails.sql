/* Write your PL/SQL query statement below */
select email as Email
from Person
GROUP BY email; 
having count(email)>1;