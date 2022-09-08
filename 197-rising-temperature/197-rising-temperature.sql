# Write your MySQL query statement below
select wt2.id 
from Weather wt1, Weather wt2
where wt2.temperature > wt1.temperature and
	to_days(wt2.recordDate) - to_days(wt1.recordDate) = 1;