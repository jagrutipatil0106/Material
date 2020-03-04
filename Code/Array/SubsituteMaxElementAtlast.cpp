# include<iostream>
using namespace std;
int main(){

	int N;
	cout<<"Enter the size of an array"<<endl;
	cin>>N;
	int array[N];
	int Index;
	int Temp;

	cout<<"Enter an array element"<<endl;

	
	

	for(int i = 0; i < N; i++){
		cin>>array[i];
			}
	 int RunningMax = array[0];

	 for(int i = 0; i < N; i++){
	 	if(RunningMax < array[i]){
	 		RunningMax = array[i];
	 		Index = i;
	 	}
	  }

	  Temp = RunningMax;
	  RunningMax = array[N-1];
	  array[N-1] = Temp;
	  cout<<"maxnuber :"<<RunningMax<<"array last element :"<<array[N-1]<<endl;
	
	  cout<<Index<<endl;
	  cout<<"Maxnumber :"<<RunningMax<<endl;
	  cout<<sizeof(array)<<endl; //size of an array
	  cout<<sizeof(array[0])<<endl; //size of an array elemnt
	  cout<<sizeof(array)/sizeof(array[0]); //number of elements



	return 0;
}