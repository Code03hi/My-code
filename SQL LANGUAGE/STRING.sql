use b4
select ascii('A');
select ascii('Z');
select char(65);

declare @start int
set @start = 65
while(@start<=90)
begin 
print char(@start)
set @start = @start + 1
end

select * from [dbo].[FULLTIME];

select ltrim('   hello');

select first_name,middle_name,last_name , rtrim(ltrim(first_name)) + ' ' + middle_name + ' ' + last_name as full_name from bio_data;

select upper(middle_name) from bio_data;
select lower(middle_name) from bio_data;
select reverse(middle_name) from bio_data;
select len(middle_name) from bio_data;

select len('bhagwan') as name;
select reverse('bhagwan') as name;
select lower('Bhagwan Jha') as name;
select upper('Bhagwan Jha') as name;


