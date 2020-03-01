package Set_Interface;

import java.util.TreeSet;

public class TreeSetDemo 
{

	//TreeSet class implements "NavigableSet"
	//NavigableSet extends SortedSet 
	//SortedSet extends Set
	
	//Note that here as well the collection is un-ordered
	//But, it is in sorted form
	public static void main(String[] args) 
	{
		TreeSet<Integer> tsObj = new TreeSet<Integer>();
		
		tsObj.add(40);
		tsObj.add(50);
		tsObj.add(90);
		tsObj.add(10);
		tsObj.add(5);
		
		System.out.println(tsObj);
		
		//"ceiling"
		//Returns the least element in this set greater than or equal to 
		//the given element, or null if there is no such element.
		Integer least = tsObj.ceiling(41);

		//"floor"
		//Returns the greatest element in this set less than or equal to the 
		//given element, or null if there is no such element.
		Integer greatest = tsObj.floor(41);
		
		System.out.println(least);
		System.out.println(greatest);
		
	
		//Rest Everything is same as that of "HashSet" class
	}

}
