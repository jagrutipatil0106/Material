# include <stdio.h>

int main(){
// execution of the programme begins from main function

	char input;
	// initialization of variable input of type charcter.

	printf("Please tell is it raining or not?: ");

	scanf("%c", &input);
	// taking input from user into input variable.
	// %c is used because input is a charcter type.

	if(input == 'y'){
		// checking if entered input is 'y', then this block will get execute..
		printf("We will eat Rasmalai\n");
	}
	else {
		// else this block will get execute.
		printf("We will eat Ice-Cream!!\n");
	}



	return 0;
	// returning control.
}