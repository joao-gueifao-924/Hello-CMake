#include <iostream>

int main(int argc, char * argv[])
{
	if (argc > 1)
	{
		return EXIT_FAILURE;		
	}

	std::cout << "Hello World!" << std::endl;
	return EXIT_SUCCESS;
}