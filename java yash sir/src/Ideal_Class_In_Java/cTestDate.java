package Ideal_Class_In_Java;

public class cTestDate 
{
	public static void main(String[] args) 
	{
		//cDate d1; //In C++
		
		//cDate *ptr =  new cDate; //In C++ (Dynamic Object)
		
		cDate d1 = new cDate(); //Here as well default constructor is being invoked for d1 
		                        //This DC is provided by JVM for ur class
		                        //Rule :- If u define any single constructor for ur class then the default 
		                        //also has to be defined by u i.e. JVM won't provide it now
		
		d1.display();
		
		//initDate(); //Error : initDate is a member function of class cDate
		              //So, compulsory u need to call it on an object 
		              //i.e object.memberfuctionName(---------);
		
		d1.initDate(); //You are calling "initDate" method for/on object d1 
		               //"day = month = year = 1;" is done in the method 
		               //so, the day, month and year would be considered as of d1 
		               
		d1.display();
		
		d1.setDate(6, 1, 2020);
		d1.display();
		
		cDate d2 = new cDate();
		
		d2.setDate(d1.getMonth(), d1.getDay(), 1999);
		d2.display();
		
		d2.accept();
		d2.display();
		
		
	}
}
