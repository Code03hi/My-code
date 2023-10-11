import java.sql.*;
public class InsertStatementJDBC {
    public static void main(String[] args) {
        try
        {
            // creating a connection
            String URL = "jdbc:mysql://localhost:3306/BHAGWAN";
            String User = "root";
            String password = "SAM@123";
            Class.forName("com.mysql.cj.jdbc.Driver");
            Connection con = DriverManager.getConnection(URL,User,password);
            if (con.isClosed())
            {
                System.out.println("Connection is failed to establishment");
            }
            else
            {
                System.out.println("Connection establishment process is complete");
                // create a query
                String query = "create table Student(tID int(25) primary key auto_increment,tName varchar(25) not null,tCity varchar(250))";
                Statement statement = con.createStatement();
                statement.executeUpdate(query);
                System.out.println("Table is created in database and is assign");
                System.out.println(con);
                con.close();
            }
        }
        catch (Exception e)
        {
            e.printStackTrace();
        }
    }
}
