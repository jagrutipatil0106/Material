# include<iostream>
using namespace std;
int main(){

	int N;
	cout<<"Enter the size of an array"<<endl;
	cin>>N;

	cout<<"Enter an array element"<<endl;

	int array[N];

	for(int i = 0; i < N; i++){
		int num;
		cin>>num;
		array[i]=num;
	}
	 int temp = array[0];
	 for(int i = 0; i < N; i++){

	 	if(temp < array[i]){

	 		temp = array[i];
	 	}
	  }
	  cout<<"Maxnumber :"<<temp;


	return 0;
}