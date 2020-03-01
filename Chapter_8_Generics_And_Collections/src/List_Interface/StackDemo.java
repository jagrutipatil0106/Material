package List_Interface;

import java.util.Collections;
import java.util.Iterator;
import java.util.Stack;

public class StackDemo 
{
	//Stack is simply a data structure which works on the LIFO
	//principle.
	//Internally "Stack" extends from "Vector". Thus, we can say that
	//Stack is a vector. In Stack class we have additional 5 operations
	//The usual push and pop operations are provided, as well as a 
	//method to peek at the top item on the stack, a method to test 
	//for whether the stack is empty, and a method to search the stack 
	//for an item and discover how far it is from the top. 
	
	public static void main(String[] args) 
	{
		Stack<Integer> sObj = new Stack<Integer>();
			
		int size = sObj.size();
		System.out.println("Size of the Stack is : "+size);
		
		boolean flag = sObj.empty();
		System.out.println("\nStack is Empty : " +flag);
		
		sObj.push(50); //Note that : It is un-sorted and duplicates are allowed
		sObj.push(40);
		sObj.push(40);
		sObj.push(20);
		sObj.push(10);
		
		System.out.println("\nDisplaying the Stack below-");
		System.out.println(sObj);
		//System.out.println(sObj.toString());
		
		Integer element1 = sObj.pop();
		System.out.println("\nThe element poped is : "+element1);
		
		System.out.println("\nAfter poping the stack is : ");
		System.out.println(sObj);
		
		//"peek" simply returns the element which is on the top of
		//the Stack without poping it i.e. removing it
		//"pop" returns the element which is on the top of
		//the Stack and pops it i.e. removes it.
		
		
		Integer element2 = sObj.peek();
		System.out.println("\nThe element at the top of the stack is : "+element2);
	
		System.out.println("\nAfter peeking the stack is : ");
		System.out.println(sObj);
	
		//Well, the below method can also be used to itterate over a Stack
		//and display the elements of it.
		System.out.println("\nDisplaying the elements from the Stack : ");
		
		Iterator<Integer> itr = sObj.iterator();
		
		while(itr.hasNext())
		{
			Integer i = itr.next();
			System.out.println(i);
		}
		
		
		
		//Well, you know that Satck is extending from Vector
		//Thus, we can sort a Stack in same way as we Sort a Vector
		
		System.out.println("\nAfter Sorting the Stack is : ");
		Collections.sort(sObj);
		System.out.println(sObj);
	}
	
}
