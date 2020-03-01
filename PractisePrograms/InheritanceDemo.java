import java.text.SimpleDateFormat;  
import java.util.Date;


class Bank{
	public void display(){
 		System.out.println("Print bank name");
	}

	public void displayDate(){
		SimpleDateFormat sdf = new SimpleDateFormat("MM-dd-yyyy");
		Date date = new Date();  
		String dateString = sdf.format(date);  
        System.out.println("Date in the format of MM-dd-yyyy"+dateString);
	};
};


class HDFC extends Bank{
	public void display(){
 		System.out.println("Print HDFC name");
	}
};

class SBI extends Bank{
	public void display(){
 		System.out.println("Print SBI name");
	}
};


class ICICI extends Bank{
	public void display(){
 		System.out.println("Print ICICI name");
	}
};


class InheritanceDemo{
	public static void main(String[] args){

		// Normal Initialization
		Bank b = new Bank();
		HDFC h = new HDFC();
		SBI s = new SBI();
		ICICI i = new ICICI();

		b.display();
		b.displayDate();

		h.display();
		h.displayDate();

		s.display();
		s.displayDate();

		i.display();
		i.displayDate();


		// Polymorphism


	};
};


