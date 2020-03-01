package method_overloading;

public class cTest 
{
	public void add(int a, int b)
	{
		System.out.println("Result is : "+(a+b));
	}
	
	public void add(float a, int b)
	{
		System.out.println("Result is : "+(a+b));
	}	
	
	public void add(String a, String b)
	{
		System.out.println("Result is : "+(a+b));
	}	
	
	public static void main(String[] args) 
	{
		cTest obj = new cTest();
		
		obj.add(10, 20);
		obj.add(10.12f, 20);
		obj.add("CRB ", "Tech");
		
		//12.34 in an example of type "double"
		//12.34f in an example of type "float"
		
		
	}
}
