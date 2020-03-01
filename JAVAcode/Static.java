class Employee
{
	private int eid;
	private String ename;
	private int salary;
	public static int count=0;

	 Employee(int id,String name,int salary)
	 {
	 	count++;
	 	eid=id;
	 	ename=name;
	 	this.salary=salary;
	 }
	 Employee(){
	 	this(111,"Sagar",3900000);
	 }

	public static int getNoEmp(){
		return count;

	}
	public void show(){
		System.out.println("id= "+eid);
		System.out.println("name= "+ename);
		System.out.println("salary= "+salary);
	}
}	
	public class Static{
	public static void main(String[]args)
		{
			Employee e=new Employee(78,"jagruti",4000000);
			e.show();
			Employee e1=new Employee();
			e1.show();
			
		} 	
	}	