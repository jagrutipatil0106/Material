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

	public void displayInterestRate(){
		System.out.println("10%");
	}
};


class HDFC_PUNE extends HDFC{
	public void displayInterestRate(){
		System.out.println("10% + 1%");
	}
};

class HDFC_BHOPAL extends HDFC{
	public void displayInterestRate(){
		System.out.println("10% + 2%");
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


class PolymorphismDemo{
	public static void main(String[] args){

		//  new String();
		// System.out.println(new String());

		// while(1 == 1){
		// 	new Bank();
		// }

		// Integer x = new String();
		// error: incompatible types: String cannot be converted to Integer
		// you can only stored an object in its own type of variable (except in Polymorphis )

		// Normal Initialization
		// Bank b = new Bank();
		// HDFC h = new HDFC();
		// SBI s = new SBI();
		// ICICI i = new ICICI();

		// Polymorphism Initialization
		Bank h = new HDFC();
		Bank s = new SBI();
		Bank i = new ICICI();

		// HDFC h2 = new Bank();
		//error: incompatible types: Bank cannot be converted to HDFC

		// Cat c = new Dog();


		// h.display();
		// h.displayDate();

		// s.display();
		// s.displayDate();

		// i.display();
		// i.displayDate();


		// // HDFC my_hdfc_array[];   //declaring array
		// // my_hdfc_array = new HDFC[1000]; // // allocating memory to array

		// // Another way of declaring and initializing arrar in single line.
		// HDFC[] my_hdfc_array = new HDFC[1000];
		// SBI[] my_sbi_array = new SBI[2000];
		// ICICI[] my_icici_array = new ICICI[500];


		// Bank[] my_bank_array = new Bank[10000];


		HDFC_PUNE h_p = new HDFC_PUNE();
		h_p.display();
		h_p.displayInterestRate();

		HDFC_BHOPAL h_b = new HDFC_BHOPAL();
		h_b.display();
		h_b.displayInterestRate();






	};
};


