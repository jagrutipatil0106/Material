// ProblemStatement

# include <iostream>
using namespace std;

class Parent{
public:
	int id_p; //class varible

};

class child : public Parent{
public:
	int id_c;
};


int main(){

	child obj1;
	child obj2;

	obj1.id_c = 45;
	obj1.id_p = 90;

	

	cout<<"Child id is :"<<obj1.id_c<<endl;
	cout<<"parent id is :"<<obj1.id_p<<endl;

	obj2.id_c = 56;
	obj2.id_p = 100;

	

	cout<<"Child id is :"<<obj2.id_c<<endl;
	cout<<"parent id is :"<<obj2.id_p<<endl;



	return 0;
}