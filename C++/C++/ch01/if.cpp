#include <iostream>
int main()
{
	// currVal is the number we're counting; we'll read new values into val
	int currVal = 0, val = 0;
	// Read first number and ensure that we have data to process
	if (std::cin >> currVal) {
		int cnt = 1; // Store the count for the current value we're processing
		while (std::cin >> val) {	 // Read the remaining numbers
			if (val == currVal)	  // If the values are the same
				++cnt;		// Add a to cnt
			else { // Otherwise, print the count for the previous value
				std::cout << currVal << " coours "
					  << cnt << " times" << std::endl;
				currVal = val;	// Remember the new vale
				cnt = 1;	// Reset the counter
				}
		} // while loop ends here
		// Remember to print the count for the last value in the file
		std::cout << currVal << " coours "
			  << cnt << " times" << std::endl;
	} // Outermost if statement ends here
	return 0;
}
