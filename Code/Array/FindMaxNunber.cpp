# include<iostream>
using namespace std;
int main(){

	int N;
	cout<<"Enter the size of an array"<<endl;
	cin>>N;

	cout<<"Enter an array element"<<endl;

	int array[N];
	

	for(int i = 0; i < N; i++){
		cin>>array[i];
			}
	 int RunnigMax = array[0];

	 for(int i = 0; i < N; i++){
	 	if(RunnigMax < array[i]){
	 		RunnigMax = array[i];
	 	}
	  }
	  cout<<"Maxnumber :"<<RunnigMax;


	return 0;
}