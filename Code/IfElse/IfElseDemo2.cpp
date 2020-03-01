# include <stdio.h>

int main(){

	char input;

	printf("Please tell is it raining or not?: ");
	scanf("%c", &input);

	// printf("%c\n", input);

	if(input == 'y'){
		printf("We will eat Rasmalai\n");
	}
	else if(input == 'n'){
		printf("We will eat Ice-Cream!!\n");
	}

	return 0;
}