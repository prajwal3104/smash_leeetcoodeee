# Write your MySQL query statement below
Select id
from Weather w
where temperature > (Select temperature from Weather where
                     DATEDIFF(w.recordDate , recordDate) = 1)
order by recordDate ASC;
