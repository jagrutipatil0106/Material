package List_Interface;

import java.util.Collections;
import java.util.Iterator;
import java.util.LinkedList;

public class LinkedListDemo 
{

	//Note that : LinkedList class implements List as well as Deque
	//Deque interface extends from Queue
	//Thus, LinkedList is implementing List aswell as Queue
	//The implementation is unsynchronized and allows "null"
	public static void main(String[] args) 
	{
		LinkedList<Integer> LLObj = new LinkedList<Integer>();
		
		LLObj.add(90); //By default "add" appends the elements
		LLObj.add(70);
		LLObj.add(60);
		
		System.out.println("The Linked List is : "+LLObj);
		
		LLObj.addFirst(10);
		LLObj.addLast(100);
		System.out.println("\nAfter Adding at the First and Last the Linked List is : "+LLObj);
		
		LLObj.remove(); //By default it removes head(First NODE) from the L.L
		System.out.println("\nAfter removing Linked List is : "+LLObj);
		
		LLObj.removeFirst();
		LLObj.removeLast();
		System.out.println("\nAfter removing First and Last Node, Linked List is : "+LLObj);

		LLObj.add(50); //Again Note that duplicates are allowd here
		LLObj.add(60);
		LLObj.add(70);
		LLObj.add(80);
		
		System.out.println("\nAfter adding, Linked List is : "+LLObj);
		
		LLObj.remove(3); //By default index starts with 0.
		System.out.println("\nAfter Removing the element at 3rd index, Linked List is : "+LLObj);
		
		int value1 = LLObj.getFirst();
		int value2 = LLObj.getLast();
		int value3 = LLObj.get(3);
		
		System.out.println("\nInteger element at 1st Node is : "+value1);
		System.out.println("Integer element at Last Node is : "+value2);
		System.out.println("Integer element at index 3 is : "+value3);
		
		//---------------------------------------------------------------------------
		//Similar code which is written below can be used to itterate over
		//a LinkedList and display elements out of it.
		
		System.out.println("\nDisplaying the LinkedList : ");
		Iterator<Integer> itr = LLObj.iterator();
		
		while(itr.hasNext())
		{
			Integer val = itr.next();
			System.out.println(val);
		}
		
		Collections.sort(LLObj);
		
		System.out.println("\nAfter Sorting the Linked List is : "+LLObj);
	}

}
