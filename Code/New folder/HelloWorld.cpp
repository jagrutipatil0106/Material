# include <iostream>
# include <cstring>

using namespace std;

int main(){
	
	string is_pee;

	cout<<"Hello World!!"<<endl;
	cout<<"Hello Jagruti. Do you want to PEE?"<<endl;
	
	cin>>is_pee;

	if (is_pee == "yes"){
		cout<<"Please go to the bathroom"<<endl;
	}
	else{
		cout<<"You can go pee later when your blader is full. Thanks !!"<<endl;
	}

	return 0;
}