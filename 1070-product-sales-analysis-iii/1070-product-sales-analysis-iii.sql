# Write your MySQL query statement below
# select s.product_id, s.year as first_year ,s.quantity, s.price from Sales as s inner join Product as p on s.product_id = p.product_id where s.year in (select min(year) from sales where product_id = s.product_id )
select product_id, year as first_year ,quantity, price from Sales where (product_id,year)
in (select product_id, min(year) from sales group by product_id);