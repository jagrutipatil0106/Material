// https://www.geeksforgeeks.org/inheritance-in-c/

#include <iostream>
#include <cstring>

using namespace std;

class Person{
private:
	int age;
	string first_name;
	string last_name;
	string blood_group;
	float height;
	string address;

public:
	void setHeight(float h){
		height = height;
	}

	float getHeight(){
		return height;
	}


};

class Student : public Person 
{
public:
	Student(){};
	~Student(){};
	
	void setAge(int age){
		age = age;

	}

	int getAge(){
		return age;
	}
};

int main(){
	Student s1;

	s1.setAge(19);
	cout<<s1.getAge()<<endl;

	s1.setHeight(200);
	cout<<s1.getHeight()<<endl;	

	return 0;
}