 #include <iostream>
#include <cstring>

using namespace std;

class Student{
	private:
		string studentName;
		int rollNumber;
		string department;

	public:
		Student(string name, int rolln, string dept){
			cout<<"Constructor is called"<<endl;
			studentName = name;
			rollNumber = rolln;
			department = dept;
		}

		Student(string name){
			cout<<"Constructor 2 is called"<<endl;
			studentName = name;
		}

		~Student(){
			cout<<"Destructor is called"<<endl;
		}

		void setStudentName(string name){
			studentName = name;
		}

		string getStudentName(){
			return studentName;
		}

		void setRollNumber(int rolln){
			rollNumber = rolln;
		}

		int getRollNumber(){
			return rollNumber;
		}

		void setDepartment(string dept){
			department = dept;
		}

		string getDepartment(){
			return department;
		}
};



int main(){
	// Student s1();
	// Student s1;

	Student s1("Jagruti", 1100, "CompScience");
	Student s2("Jagruti");

	// cout<<s1.getRollNumber()<<endl;
}