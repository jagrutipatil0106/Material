package Comparator_Interface;

public class Employee
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
	
	public int getId()
	{
		return id;
	}
	
	void display()
	{
		System.out.println("Id is : "+id+", Name is : "+name+", Salary is : "+sal);
	}

	
	public static void main(String[] args) 
	{
		Employee e1 = new Employee();
		e1.display();
		
		Employee e2 = new Employee(2121, 10000.00f, "Priya");
		e2.display();
	}

}
