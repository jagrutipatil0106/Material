# include <iostream>

using namespace std;


class BankAccount{

	// Class Data 
	int accountNumber;
	char accountType;
	char accountHolderName[20];
	int balance = 0;

	// Class Mathods/Functions

public:

	void setAccountNumber(int N){
		accountNumber = N;
	}

	void setAccountType(char t){
		accountType = t;
	}

	// void setAccountHolderName(char* name){
	// 	accountHolderName = name;
	// }

	int getBalance(){
		return balance;
	}

	void addMoney(int money){
		balance = balance + money;
	}

	void subtractMoney(int money){
		balance = balance - money;
	}

};

int main(){

	BankAccount jagruti;
	// BankAccount is the class / DataType
	// jagruti is the object of this class.


	cout<<jagruti.getBalance()<<endl;

	jagruti.addMoney(1000);

	cout<<"Balance: "<<jagruti.getBalance()<<endl;

	jagruti.subtractMoney(100);

	cout<<"Balance: "<<jagruti.getBalance()<<endl;
		

	return 0;
}
