#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main(void){

	srand( time( NULL) ); // seed random number from time
	int random_number = 1 + (rand() % 100); // random number between 1 and 10
	// declare variable to store guess of user and set to 0
	// declare variable as counter for number of guesses
	int guess_number=0;
	
	int counter=0;
	
	for(;;)
	{
		// increment guess counter
		counter = counter + 1;
		// read input from user
		//
		
		cin  >> guess_number;
		
		// compare input from user to random number
		// print out winner, too high or too low message
		//

		if ( guess_number == random_number)
		{
			cout << "You win" << endl;
			break;
		}else if (guess_number > random_number)
		{
			cout << "Too High" << endl;
		}else{
			cout << "Too Low" << endl;
		}
	}

	// print message with number of guesses
	//
	
	cout << counter << endl;

	return 0;
}
