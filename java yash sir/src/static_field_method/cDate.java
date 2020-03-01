package static_field_method;

import java.util.Scanner;

public class cDate 
{
	private int day;		//Fields/Attributes
	private int month;
	private int year;
	
	//private int counter = 0; //Right now 'counter' is also non-static
	
	static private int counter = 0;
	
	public cDate()
	{
		day = month = year = 1;
		counter++;
	}
	
	public cDate(int d, int m, int y)
	{		
		day = d;
		month = m;
		year = y;
		counter++;
		
	}
	

	
	
	public void initDate()
	{
		day = month = year = 1;
	}
	
	public void setDate(int d, int m, int y)
	{
		day = d;
		month = m;
		year = y;
	}
	
	public static void displayTotalNumberOfObjectsCreatedSoFar()
	{
		System.out.println("Total No. of objects created so far is : "+counter);
		
		//System.out.println("Value of day is : "+day);
	}
	
	/*
	public static void showTotalNumberOfObjectsCreatedSoFar()
	{
		System.out.println("Total No. of objects created so far is : "+counter);
		
		//System.out.println("Value of day is : "+day);
	}
	*/
	
	//It's object dependant
	//Bcz it's accessing object specific data (day, month and year)
	
	public void display()
	{
		System.out.println("Date is : "+day+"-"+month+"-"+year);
	}
	
	public void accept()
	{
		Scanner sObj = new Scanner(System.in);
		
		System.out.println("Enter the day : ");
		//scanf("%d", &day);
		day = sObj.nextInt();
		System.out.println("Enter the month : ");
		month = sObj.nextInt();		
		System.out.println("Enter the year : ");
		year = sObj.nextInt();
	}
	
	public int getDay()
	{
		return day;
	}

	public int getMonth()
	{
		return month;
	}
	
	public int getYear()
	{
		return year;
	}	
	
	public void setDay(int d)
	{
		day = d;
	}
	
	
	public void setMonth(int m)
	{
		month = m;
	}	
	
	
	public void setYear(int y)
	{
		year = y;
	}	
	
}


/*
 
class cDate 
{
	private :
	
	 int day;
	 int month;
	 int year;
	 
	 public :
	 
	void initDate()
	{
		day = month = year = 1;
	}
	
	void setDate(int d, int m, int y)
	{
		day = d;
		month = m;
		year = y;
	}
	
	.
	.
	.
	.
	.

}
*/
