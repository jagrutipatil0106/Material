#include <iostream>
#include <cstring>
using namespace std;

class Student{

private:
	// Class Data (Class Member)
	string studentName;
	int rollNumber;
	float physics;
	float chemistry;
	float mathematics;
	float total;
	int percentage;
	char grade;

public:
	int dummyPublicNumber;

public:
	// Function of a class are called member functions.
	void setName(string name){
		studentName = name;
	}

	void setRollNumber(int rollN){
		rollNumber = rollN;
	}

	int getRollNumber(){
		return rollNumber;
	}

	void setMarks(float phy, float chem, float maths){
		physics = phy;
		chemistry = chem;
		mathematics = maths;
	}
	
	float calculateTotal(){
		float total = physics + chemistry + mathematics;
		return total;
	}

	float calculatePercent(){
		float total = physics + chemistry + mathematics;
		percentage = (total/300)*100;
		return percentage;
	}

	char calculateGrade(){
		float total = physics + chemistry + mathematics;
		percentage = (total/300)*100;

		if(percentage > 80){
			grade = 'A';
		}
		else if(percentage < 80 && percentage >= 70){
			grade = 'B';
		}
		else if(percentage < 70 && percentage >= 60){
			grade = 'C';
		}
		else{
			grade = 'D';
		}
		return grade;
	}

};



int main(){

	// Defining properties of student1
	Student s1;
	s1.setName("Jagruti");
	s1.setRollNumber(201928);
	s1.setMarks(50, 56, 57);

	// cout<<"Total: "<<s1.calculateTotal()<<endl;
	// cout<<"Pecent: "<<s1.calculatePercent()<<endl;
	cout<<"Grade: "<<s1.calculateGrade()<<endl;

	s1.dummyPublicNumber = 10;
	// s1.rollNumber = 10;
	// Public members can be accessed directly as above but private numbers cannot be accessed.
	// private numbers can only be accessed via Public member functions.

	// float rollNum;
	// rollNum = s1.getRollNumber();
	// cout<<rollNum<<endl;


	// // Defining properties of student2
	// Student s2;
	// s2.setName("Pragati");
	// s2.setRollNumber(201930);
	// s2.setMarks(82, 82, 68);

	// cout<<"Total: "<<s2.calculateTotal()<<endl;
	// cout<<"Pecent: "<<s2.calculatePercent()<<endl;
	// cout<<"Grade: "<<s2.calculateGrade()<<endl;

}