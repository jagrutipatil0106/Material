import java.text.SimpleDateFormat;  
import java.util.Date;


class Bank{
	public void display(){
 		System.out.println("Print bank name");
	}

	public void bankAddress(){
		System.out.println("India");
	};
};


class HDFC extends Bank{
	public void display(){
 		System.out.println("Print HDFC name");
	}

	public void bankAddress(){
		System.out.println("HDFC India");
	};

	public void displayInterestRate(){
		System.out.println("10%");
	}
};


class HDFC_PUNE extends HDFC{
	public void display(){
 		System.out.println("Print HDFC_PUNE name");
	};

	public void bankAddress(){
		System.out.println("HDFC PUNE");
	};

	public void displayInterestRate(){
		System.out.println("10% + 1%");
	}
};


class HDFC_PUNE_HADAPSAR extends HDFC{
	public void display(){
 		System.out.println("Print HDFC_PUNE_HADAPSAR name");
	};

	public void bankAddress(){
		System.out.println("HDFC PUNE HADAPSAR");
	};

	public void displayInterestRate(){
		System.out.println("10% + 1%");
	}
};


class HDFC_PUNE_BANER extends HDFC{
	public void display(){
 		System.out.println("Print HDFC_PUNE_BANER name");
	};

	public void bankAddress(){
		System.out.println("HDFC PUNE BANER");
	};

	public void displayInterestRate(){
		System.out.println("10% + 1%");
	}
};


class HDFC_BHOPAL extends HDFC{
	public void display(){
 		System.out.println("Print HDFC_BHOPAL name");
	}

	public void bankAddress(){
		System.out.println("HDFC BHOPAL");
	};

	public void displayInterestRate(){
		System.out.println("10% + 2%");
	}
};

class SBI extends Bank{
	public void display(){
 		System.out.println("Print SBI name");
	}
};


class SBI_BHOPAL extends SBI{
	public void display(){
 		System.out.println("Print SBI_BHOPAL name");
	}

	public void bankAddress(){
		System.out.println("SBI BHOPAL");
	};
}


class SBI_PUNE extends SBI{
	public void display(){
 		System.out.println("Print SBI_PUNE name");
	}

	public void bankAddress(){
		System.out.println("SBI PUNE");
	};
}



class ICICI extends Bank{
	public void display(){
 		System.out.println("Print ICICI name");
	}
};


class PolymorphismDemo2{
	public static void main(String[] args){

		Bank[] bank_array = new Bank[9];
		bank_array[0] = new HDFC();
		bank_array[1] = new HDFC_BHOPAL();
		bank_array[2] = new HDFC_PUNE();
		bank_array[3] = new HDFC_PUNE_HADAPSAR();
		bank_array[4] = new HDFC_PUNE_BANER();
		bank_array[5] = new SBI();
		bank_array[6] = new SBI_PUNE();
		bank_array[7] = new SBI_BHOPAL();
		bank_array[8] = new ICICI();

		for(int i = 0; i<9; i++){
			bank_array[i].display();
			bank_array[i].bankAddress();
			
			// bank_array[i].displayInterestRate();
		};	

		
		HDFC[] hdfc_array = new HDFC[5];
		hdfc_array[0] = new HDFC();
		hdfc_array[1] = new HDFC_BHOPAL();
		hdfc_array[2] = new HDFC_PUNE();
		hdfc_array[3] = new HDFC_PUNE_HADAPSAR();
		hdfc_array[4] = new HDFC_PUNE_BANER();

		for(int i = 0; i<5; i++){
			hdfc_array[i].display();
			hdfc_array[i].bankAddress();
			hdfc_array[i].displayInterestRate();
		};

	};
};


