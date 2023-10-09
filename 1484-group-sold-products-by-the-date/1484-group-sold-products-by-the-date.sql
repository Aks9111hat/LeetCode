# Write your MySQL query statement below
SELECT sell_date, count(distinct product) as num_sold,
GROUP_CONCAT( distinct product ) as "products" 
FROM Activities group by sell_date order by sell_date;