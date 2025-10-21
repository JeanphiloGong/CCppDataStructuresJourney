#include <iostream>
int main()
{
	int sum = 0, value = 0;
	// Read until end-of-file, calculating a rnnning of all values read
	while (std::cin >> value)
		sum += value; // Equivalent to sum = sum + value
	std::cout << "Sum is: " << sum << std::endl;
	return 0;
}

