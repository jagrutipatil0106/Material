package Comparable_Interface;

//Note that here in - "Comparable<Employee>"
//It means that you are going to compare with an object of type "Employee"

public class Employee implements Comparable<Employee>
{
	private int id;
	private float sal;
	private String name;
	
	
	public Employee() 
	{
		this.id = 0;
		this.sal = 0.0f;
		this.name = "UNKNOWN";
	}
	
	public Employee(int id, float sal, String name) 
	{
		this.id = id;
		this.sal = sal;
		this.name = name;
	}
	
	void display()
	{
		System.out.println("Id is : "+id+", Name is : "+name+", Salary is : "+sal);
	}

	
	public int compareTo(Employee obj2) 
	{
		if(id > obj2.id)
			return 1;
		
		if(id < obj2.id)
			return -1;
		else
			return 0;
	}

	public static void main(String[] args) 
	{
		Employee e1 = new Employee();
		e1.display();
		
		Employee e2 = new Employee(2121, 10000.00f, "Priya");
		e2.display();
	}

}
