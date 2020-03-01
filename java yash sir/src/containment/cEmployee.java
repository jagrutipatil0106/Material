package containment;

public class cEmployee 
{
	private int id;
	private float sal;
	
	private String name;  //"name" i.e refernce of a class String is present as a member in cEmployee
	private cDate jdt;    //"jdt" i.e referance of a class cDate is present as a member in cEmployee
	                     //It's containment i.e. Object of a class is present inside some other class as 
	                     //a member of it 
	                     //Note :- In java we never contain the actual object. It's always the reference that we have 
	                     //i.e. it's refered as logical containment in case of javaa
	
	public cEmployee()
	{
		id = 1;
		sal = 10000;
		
		//name = Address of actual object of type String ;
		name = new String("Unknown");
		jdt = new cDate();
	}
	
	public cEmployee(int i, float f, String n, int d, int m , int y)
	{
		id = i;
		sal = f;
		
		name = n;
		jdt = new cDate(d, m, y);
	}
	
	public void display()
	{
		System.out.println("Id is : "+id);
		System.out.println("Salary is : "+sal);
		System.out.println("Name is : "+name);
		
		//System.out.println("Joining Date is : "+jdt.day+"-"+jdt.month+"-"+jdt.year);
		
		System.out.print("Joining ");
		jdt.display();		//Reusability
	}
	
	
	public static void main(String[] args) 
	{
		cEmployee e1 = new cEmployee();
		e1.display();
		
		System.out.println();
		
		cEmployee e2 = new cEmployee(2121, 30000.45f, "Hitesh", 2, 2, 2002);
		e2.display();
	}
}
