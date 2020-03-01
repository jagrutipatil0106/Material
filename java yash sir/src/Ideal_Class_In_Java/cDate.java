package Ideal_Class_In_Java;

import java.util.Scanner;

public class cDate 
{
	private int day;		//Fields/Attributes
	private int month;
	private int year;

	
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
