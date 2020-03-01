package Map_Interface;

import java.util.*;
import java.util.Map.Entry;

public class HashMapDemo 
{
	//It stores data in terms of "key-value" pair
	//HashMap - Its implementation is unsynchronized and allows null
	//HashTable - Its implementation is synchronized and do not allows null
	//Further, it is also unordered collection
	//Duplicates are not allowed
	
	public static void main(String[] args) 
	{
		HashMap<Integer, String> hmObj = new HashMap<Integer, String>();
	
		//Let us insert data into it first.
		//Again note that it is unordered and duplicate are not allowed.
		//i.e. key can't be duplicate
		
		hmObj.put(4, "Jalna");
		hmObj.put(2, "Nashik");
		hmObj.put(3, "Ahmednagar");
		hmObj.put(1, "Pune");
		hmObj.put(1, "Nagpur"); 
		//Note that here duplicates are not allowed.
		//Note that actually internally it do not overwrite the key
		//Concept of bucket is used
		
		//displaying HashMap all at once directly
		System.out.println("Displaying the HashMap : ");
		System.out.println(hmObj);
		
		int key = 3;
		String value = hmObj.get(key);
		System.out.println("\nValue at key "+key+" is : "+value);
		
	
		//Now, how to display each and every individual record?
		//Iterator is not available for Map
		//So, one of the method is -
		//We convert the HashMap into Set
		//Question : Why to convert it into Set, Why not List
		//Answer : In HashMap duplicates are not allowed and same is the
		//true for Set as well.
		//So, compatible one is Set and not List.
		//So, now will simply convert all the keys into "Set"
		//i.e the set would be {1, 2, 3, 4} 
		//So, the data type of the elements from the "Set" is int
		//That is done using the "keySet" method
		
		Set s = hmObj.keySet();
	
		//Iterator<Integer> because the Set is of Integer
		Iterator<Integer> itr = s.iterator();
		
		System.out.println("\nDisplaying the HashMap :");
		while(itr.hasNext())
		{
			int k = itr.next();
			String v = hmObj.get(k);
			
			System.out.println("Key is : "+k+" Value is : "+v);
			
		}
		
		//Another way to convert HashMap into Set
		//Note that, in HashMap we have data as - 
		//1 Nagpur
		//2 Nashik
		//3 Ahmednagar
		//4 Jalna
		
		//These are nothing but these are individual entries
		//i.e. 1 Nagpur is one entry and so on.
		
		//So, we can even convert these and have a set of Entries
		//this has to be done using a method "entrySet"
		
		Set<Map.Entry<Integer, String>> ref=hmObj.entrySet();
		
		Iterator<Map.Entry<Integer, String>> itr2 = ref.iterator();
		
		System.out.println("\nOnce again displaying the HashMap : ");
	
		while(itr2.hasNext())
		{
			Map.Entry<Integer, String> MERef = itr2.next();
			
	
			Integer key2 = MERef.getKey();
			String value2 = MERef.getValue();
			
			System.out.println("Key is : "+key2+" Value is : "+value2);
		}
		
		TreeSet<Integer> tsObj = new TreeSet<Integer>(s);
		
		System.out.println(tsObj);
		}

}
