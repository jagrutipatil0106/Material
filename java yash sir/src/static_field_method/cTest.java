package static_field_method;

public class cTest 
{
	public static void main(String[] args) 
	{
		
		cDate.displayTotalNumberOfObjectsCreatedSoFar();
		
		cDate d1 = new cDate(1, 1, 1);
		
		cDate d2 = new cDate(2, 2, 2);
		
		cDate.displayTotalNumberOfObjectsCreatedSoFar();
		
		cDate d3 = new cDate(3, 3, 3);
		
		cDate d4 = new cDate();
		
		cDate.displayTotalNumberOfObjectsCreatedSoFar();
		
		
		
		
		
	}
}
