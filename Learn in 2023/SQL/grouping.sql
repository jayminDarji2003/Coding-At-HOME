 -- Worker table quary

-- like (%)
select * from worker where first_name like '%mi%';

-- like (_)
select * from worker where first_name like '%ee_';

-- sorting using order by (ascending order)
select * from worker order by salary;
-- descending order
select * from worker order by salary desc;

select * from worker;

-- Distinct
select distinct department from worker ;

-- Grouping data (use Aggregation functions) (count , avg , sum , min , max)
-- using GROUP BY
select department from worker group by department;  -- by default DISTINCT
-- count
select department,count(department) from worker group by department;
-- avg
select department,avg(salary) from worker group by department;
-- min
select department,min(salary) from worker group by department;
-- max
select department,max(salary) from worker group by department;
-- sum
select department,sum(salary) from worker group by department;

-- GROUP BY with HAVING
select department,count(department) from worker group by department;
select department,count(department) from worker group by department having count(department) > 1;











