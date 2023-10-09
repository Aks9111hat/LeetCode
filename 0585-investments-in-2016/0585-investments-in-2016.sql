# Write your MySQL query statement below
# with Data as
# (
#     select sum(tiv_2016) as tiv_2016 from 
#     (
#         select * from Insurance group by lat,lon having count(*) = 1
#     ) temp1 
#     group by tiv_2015 having count(*)>1
# )

# select round(sum(Data.tiv_2016),2) as tiv_2016 from Data

select round(sum(TIV_2016),2) TIV_2016
from insurance a
where 1 = (select count(*) from insurance b where a.LAT=b.LAT and a.LON=b.LON) 
and 1 < (select count(*) from insurance c where a.TIV_2015=c.TIV_2015)  ;
