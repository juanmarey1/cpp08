#include "easyfind.hpp"
#include "easyfind.tpp"

int	main(void)
{
	std::vector<int> vec = {1, 2, 3, 4, 5};

	try {
		std::vector<int>::iterator number = easyfind(vec, 3); // POSITION 2
		std::cout << "Vector: Found 5 at index: " << std::distance(vec.begin(), number) << std::endl << std::endl;
	}
	catch (const std::out_of_range &e)
	{
		std::cout << e.what() << std::endl;
	}

	try {
		std::vector<int>::iterator number = easyfind(vec, 6); // NOT FOUND
		std::cout << "Found 5 at index: " << std::distance(vec.begin(), number) << std::endl;
	}
	catch (const std::out_of_range &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}


	std::list<int> lst = {1, 2, 3, 4, 5};

	try {
		std::list<int>::iterator number = easyfind(lst, 4); // POSITION 3
		std::cout << "List: Found 5 at index: " << std::distance(lst.begin(), number) << std::endl << std::endl;
	}
	catch (const std::out_of_range &e)
	{
		std::cout << e.what() << std::endl;
	}

	try {
		std::list<int>::iterator number = easyfind(lst, 6); // NOT FOUND
		std::cout << "Found 5 at index: " << std::distance(lst.begin(), number) << std::endl << std::endl;
	}
	catch (const std::out_of_range &e)
	{
		std::cout << e.what() << std::endl;
	}


	return (0); 
}