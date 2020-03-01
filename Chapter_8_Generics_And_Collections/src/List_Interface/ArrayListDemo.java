package List_Interface;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Iterator;
import java.util.Vector;

public class ArrayListDemo 
{

	//index
	//duplicates allowed
	//ordered i.e unsorted 
	//removing is allowed
	
	//ArrayList enables us to create a List of elements.
	//This List can be of elements belonging to same type (If generics is used)
	//OR we can also have a collection of elements belonging to different types.
	//In ArrayList duplicates are allowed and it stores elements based on their
	//index position i.e in Un-Sorted form.
	
	//Note that ArrayList object has "capacity" associated with it.
	//This "capacity" is nothing but the size of an array which is internally used
	//to process this ArrayList.
	
	//Note that "ArrayList" and "Vector" are exactly similar.
	//The only difference is that - 
	//"ArrayList" is un synchronized where as,
	//"Vector" is synchronized.
	
 	
	public static void main(String[] args) 
	{
		
		 
		//Vector<Integer> alObj = new Vector<Integer>();
		ArrayList<Integer> alObj = new ArrayList<Integer>();
		
		//ArrayList<Integer> alObj = new ArrayList(); //well fine
		
		//ArrayList<int> alObj = new ArrayList(); //Error: No type can't be primitive
		
		//"size" returns us the number of elements in the Lists
		int size = alObj.size();
		System.out.println("Size of ArrayList is : "+ size);
	
		alObj.add(40); //Here actually argumnet passed should be of type Integer
		alObj.add(20); //Integer. But "int" also works fine. Internally BOXING
		alObj.add(30); //is done
		alObj.add(10);
		Integer i = new Integer(50);
		alObj.add(i); //This is the standard one.
		alObj.add(20); //
		
		alObj.add(0, 100); //Fine. Will add element '100' at index '0'.
	
		
		//The below s.o.p will also work fine. It will display the whole List
		//Here, "toString" method of ArrayList class will be automatically called.
		System.out.println(alObj);
	
		//This is another way to display an ArrayList
		
		Iterator<Integer> itr = alObj.iterator();
		while(itr.hasNext())
		{
			Integer iObj = itr.next();
			System.out.println(iObj);
		}
	
		//ArrayList do not sort elements by default.
		//Elements are added based on their index position i.e. in un-sorted form.
		//To sort the List we should invoke "sort" method of "Collections" class
		//and pass an object of ArrayList type to it.
		
		Collections.sort(alObj);
		
		
		System.out.println(alObj);
		
		//Will remove the element which is at the 4th index in the List
		alObj.remove(4);
		
		System.out.println(alObj);
		

		//Well below code is also fine.
		//We have converted the ArrayList into an Array.
		//Then we are invoking "sort" method of "Arrays" class and
		//passing the array to it and getting it sorted.
		
		Object[] arr = alObj.toArray();
		Arrays.sort(arr);
		
		for(i=0; i<arr.length; ++i)
		{
			System.out.println(arr[i]);
		}
		
		
		//----------------------------------------------------------------------------------
		
		/*
		
		ArrayList alObj = new ArrayList();
		
		alObj.add(10);
		alObj.add(20.20);
		alObj.add(30.30f);
		alObj.add("Yash");
		
		System.out.println(alObj);
		
		Iterator itr = alObj.iterator();
		System.out.println("\nDisplaying the ArrayList below-");
		while(itr.hasNext())
		{
			System.out.println(itr.next());
		}
		
		//Below is one more method to display ArrayList
		//When it is containing elements belonging to different data-types
		System.out.println("\nDisplaying the ArrayList below-");
		for(int i =0 ; i<alObj.size(); i++)
		{
			System.out.println(alObj.get(i));
		}
		
		//Here below statement will lead to a "java.lang.ClassCastException".
		//Here the List is consisting of elements belonging to different
		//data types. So, it is impossible to sort them out.
		//Based on what criteria will you sort such a List?
		
		*/
		//Collections.sort(alObj);
		
		

	}

}
