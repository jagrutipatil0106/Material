// https://www.geeksforgeeks.org/output-c-programs-set-30-switch-case/

#include<stdio.h>

int main() 
{ 
	int movie = 1; 
	switch (movie << (2 + movie)) 
	// << is a left shif operator, which shift the number in left direction in binary format.
	// 1<<3 will shift 1 to three places leftwards. It will become 1000 in binary => 8 in decimal.
	{ 
	default: 
		printf(" Traffic"); 
	case 4: 
		printf(" Sultan"); 
	case 5: 
		printf(" Dangal"); 
	case 8: 
		printf(" Bahubali"); 
	} 
	// Explanation:
	// We can write case statement in any order including the default case. 
	// That default case may be first case, last case or in between the any case in the switch case statement. 
	// The value of expression “movie << (2 + movie)" is 8.
	
	return 0;
} 
