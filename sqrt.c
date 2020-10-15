/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// main function takes arguments from the terminal
// and calculate square root using sqrt function


int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}
	
	//validation to check the given argument is number or not 
	long num = 0;
	char* endp = NULL;
	num = strtol(argv[1],&endp,0);
	if (endp == NULL || *endp != (char)0)
    { 
	   printf("program argument %s is not a number\n", argv[1]);
       exit (-1);
	}; 
	
	int input = atoi(argv[1]);
	printf("Sqrt of %d is %f\n",input,sqrt(input));
	printf("End of program.Exiting.\n");
	return(0);

} // end main
