// Create an Employee class add at least one static method and
 // one static variable to it and keep a count of how many employee objects are created.		
	


class Employee{

	int Id;
	String Name;
	int Salary;
	Static int count=0;

	Employee(int id,String nm,int sal){ //constructor
		this.Id=id;
		this.Name=nm;
		this.Salary=sal;
		count++; //static variable
	}
	 public void show(){
	 	System.out.println("Employee ID= "+Id);
	 	System.out.println("Employee Name= "+Name);
	 	System.out.println("Employee Salary= "+Salary);
	 	// System.out.println("count="count);
	}
	 public static void totalEmp(){  //static method
	 	System.out.println("Total no of employees= "+count);
	}

	public static void main(String[]args){
		Employee E=new Employee(34,"jagruuti",50000);
		E.show();
		totalEmp();
	}

}