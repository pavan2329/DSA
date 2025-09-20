# Write your MySQL query statement below
SELECT email
FROM (
  SELECT email, COUNT(*) AS cnt 
  FROM Person
  GROUP BY email
) AS temp
WHERE cnt > 1;
