// https://www.tutorialspoint.com/cplusplus/cpp_class_access_modifiers.htm

#include <iostream>
#include <cstring>
using namespace std;

class BankAccount{

public:
	float balance;
	int accountNumber;

public:
	// Constructor must always be public.
	BankAccount(){
		// Initial balance should be zero.
		balance = 0;
	};

public:
	// Function of a class are called member functions.
	float getBalance(){
		return balance;
	}

	int getAccountNumber(){
		return accountNumber;
	}

	void deposite(float depositeAmount){
		balance = balance + depositeAmount;
	}

	void withdrawl(float withdrawlAmount){
		balance = balance - withdrawlAmount;
	}
};


int main(){
	
	BankAccount b1;
	cout<<b1.getBalance()<<endl;
	b1.deposite(100);
	b1.deposite(200);
	b1.withdrawl(50);
	cout<<b1.getBalance()<<endl;


	cout<<endl;

	BankAccount b2;
	b2.deposite(100);
	b2.deposite(200);
	b2.balance = 10000; // If balance is public, then its value can be changes from outside the class directly.
	b2.withdrawl(50);
	cout<<b2.getBalance()<<endl;	


	return 0;
}




