package Set_Interface;

import java.util.Collections;
import java.util.HashSet;
import java.util.Iterator;
import java.util.TreeSet;

public class HashSetDemo 
{

	//Here first understand the difference between List and Set
	//List is ordered collection where duplicates are allowed
	//Set is unordered collection where duplicates are not allowed
	//"null" is allowed in both List and Set
	
	//Implementation of "HashSet" is unsynchronized.
	
	public static void main(String[] args) 
	{
		HashSet<Integer> hsObj = new HashSet<Integer>();
		
		hsObj.add(10);
		hsObj.add(20);
		hsObj.add(30);
		hsObj.add(40);
		hsObj.add(10);
		
		//Note again. Duplicates are not allowed and it is in unordered form
		System.out.println("HashSet is : "+hsObj);
		
		int size = hsObj.size();
		System.out.println("\nSize of HashSet is : "+size);
		
		boolean flag1, flag2;
		flag1 = hsObj.contains(30);
		flag2 = hsObj.contains(90);
		System.out.println("\nHashSet contains element 30 : "+flag1);
		System.out.println("HashSet contains element 90 : "+flag2);
		
		
		System.out.println("\nDisplaying the elements form HashSet : ");
		Iterator<Integer> itr = hsObj.iterator();
		
		while(itr.hasNext())
		{ 
			Integer value = itr.next();
			System.out.println(value);
		}
		
		hsObj.remove(40);
		System.out.println("After removing element 40, HashSet is : "+ hsObj);
		
		//Note that below statement will not work.
		//Collections.sort() requires an object of List
		//There is no way to convert HashSet into List
		
		//Collections.sort(hsObj);
		
		//First of all HashSet is not mentioned for Sorting
		//Still, if you want - 
		//Then, convert HashSet into TreeSet
		
		TreeSet<Integer> tsObj = new TreeSet<Integer>(hsObj);
		
		System.out.println("\nAfter Sorting :  ");
		System.out.println(tsObj);

	}
}
