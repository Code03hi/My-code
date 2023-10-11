select * from [dbo].[MYEMPLOYEEDATA];

select city , sum(salary) as total_salary  from [dbo].[MYEMPLOYEEDATA] group by city;

select city ,gender ,sum(salary) as total_salary  from [dbo].[MYEMPLOYEEDATA] group by city,gender;

select city ,gender ,sum(salary) as total_salary  from [dbo].[MYEMPLOYEEDATA] group by cube (city,gender);

select city ,gender ,sum(salary) as total_salary  from [dbo].[MYEMPLOYEEDATA] group by city,gender with cube;

select city ,gender ,sum(salary) as total_salary  from [dbo].[MYEMPLOYEEDATA] group by city,gender with rollup;