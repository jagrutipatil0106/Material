package object_passing;

public class cTest 
{
	public void swap(cDate a, cDate b)
	{
		//a.display();
		//b.display();
		
		cDate temp;
		temp = a ;
		a = b;
		b = temp;
		
		//a.display();
		//b.display();
	}
	
	public static void main(String[] args) 
	{
		cDate d1 = new cDate(1, 1, 1);
		cDate d2 = new cDate(2, 2, 2);
		
		System.out.println("Before Swapping : ");
		d1.display();
		d2.display();
		
		
		//Actual swapping needs to be pefrormed
		
		cTest obj = new cTest(); 
		obj.swap(d1, d2);
		
		
		
		System.out.println("\nAfter Swapping : ");
		d1.display();
		d2.display();		
	}
}
