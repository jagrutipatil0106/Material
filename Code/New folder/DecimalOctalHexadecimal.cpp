# include <stdio.h>

int main()
{
	int k;

	printf("\n decimal octal hexadecimal \n");

	for(k=0; k<=33; k++){
		printf("%5d %5o %5x\n", k, k, k);
	}

	return 0;
}
