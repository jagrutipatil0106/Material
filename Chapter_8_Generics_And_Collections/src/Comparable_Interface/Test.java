package Comparable_Interface;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;

public class Test 
{

	public static void main(String[] args) 
	{
		ArrayList<Integer> Obj1 = new ArrayList<Integer>();
		
		Obj1.add(99);
		Obj1.add(1);
		Obj1.add(23);
		Obj1.add(65);
		Obj1.add(29);
		
		System.out.println("Displaying the ArrayList of Integers : ");
		System.out.println(Obj1); //Fine, it is unsorted
		
		Collections.sort(Obj1);
		
		System.out.println("\nDisplaying the ArrayList of Integers after sorting  : ");
		System.out.println(Obj1);//Fine, Now it is sorted
		
		//----------------------------------------------------------------
		//Consider following scenario
		
		ArrayList<Employee> Obj2 = new ArrayList<Employee>();
		
		Employee e1 = new Employee(8, 1000.00f, "Rohini");
		Employee e2 = new Employee(7, 2000.00f, "Monali");
		Employee e3 = new Employee(4, 3000.00f, "Sonali");
		Employee e4 = new Employee(6, 4000.00f, "Gauri");
		Employee e5 = new Employee(9, 5000.00f, "Dipali");
		
		Obj2.add(e1);
		Obj2.add(e2);
		Obj2.add(e3);
		Obj2.add(e4);
		Obj2.add(e5);
		
	
		System.out.println("\nDisplaying the ArrayList of Employee's : ");
		Iterator<Employee> itr = Obj2.iterator();
		
		while(itr.hasNext())
		{
			Employee ref = itr.next();
			ref.display();
		}
	

		//Collections.sort(Obj2);
		//This above statement will not work. At compile time itself
		//it will flash an error
		//Collections.sort requires a "List" which should be of types known to him
		//Those types are sorted in natural order.
		//In this case he don't know on what criteria to sort Employee's
		
		//So, to deal with it. Your Employee class should implement
		//the interface comparable and provide implementation for the 
		//"compareTo" method.

		//The compareTo method is supposed to return 
		//0  if both the fields are equal
		//1  if 1st > 2nd
		//-1 if 1st < 2nd
		
		System.out.println("\nDisplaying the ArrayList of Employee's after sorting : ");
		
		Collections.sort(Obj2);

		itr = Obj2.iterator();
		
		while(itr.hasNext())
		{
			Employee ref = itr.next();
			ref.display();
		}

	}
}
