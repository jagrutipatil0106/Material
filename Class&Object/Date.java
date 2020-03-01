// Create a class Date with day, month and year instance variable. Add a method to initialize and a method display the
 // objects.
// Add accessor and mutetor methods to the Date class.
//Create an array of n date objects and display them using for 

class Date
{

	int Day;
	String Month;
	int  Year;

	public Date(int day, String month, int year) //constructor
	{
		this.Day=day;
		this.Month=month;
		this.Year=year;
	}

	public Date(int day, int year) //constructor
	{
		this.Day=day;
		this.Year=year;
	}

	public void setAll(int day, String month, int year)
	{
		this.Day=day;
		this.Month=month;
		this.Year=year;
	}

	public void Display(){
		 System.out.println("Day ="+Day);
		 System.out.println("Month ="+Month);
		 System.out.println("Year ="+Year);
	}

	public void Mutator(int day,String month,int year){
		this.Year = year;
		this.Month = month;
		this.Day = day;

	}

	public int getDay(){
		return this.Day;
	}

	public int getYear(){
		return this.Year;
	}
	
	public String getMonth(){
		return this.Month;
	}
	
	public void setYear(int year){
		this.Year = year;
	}

	public void setMonth(String month){
		this.Month = month;
	}

	
	public String returnMyName(){
		return "Jagruti";
	}

	public static void main(String[] args) {
		// Date D1 = new Date(7,"june",2000);
		// D1.Display();
		// D1.Mutetor(1,"june",2001);

		// int d1year = D1.getYear();
		// String d1Monath = D1.getMonth();

		// int nextYear = d1year + 1;
		// System.out.println(nextYear);

		// D1.setYear(2100);
		// System.out.println(D1.getYear());

		// Date D2 = new Date(1,"Jan",2020);
		// System.out.println(D2.getYear());

		// Date D3 = new Date(1 ,2020);


		Date dateArray[] = new Date[5];

		System.out.println(dateArray);
		System.out.println(dateArray.length);



		// dateArray[0] = new Date(1, "Jan", 2020);
		// System.out.println(dateArray[0].returnMyName());

		for(int i=0; i<5; i++){
			dateArray[i] = new Date(i, "Jan", 2000+i);
		}

		for(int i=0; i<5; i++){
			dateArray[i].Display();
		}

	}

}