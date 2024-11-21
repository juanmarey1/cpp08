#include "Span.hpp"

int	main(void)
{
	try {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;

        // Testing with a range of numbers (using iterators)
        std::vector<int> vec = {15, 20, 25, 30, 35};
        sp.SpanFill(vec.begin(), vec.end());

        std::cout << "Shortest span after adding range: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span after adding range: " << sp.longestSpan() << std::endl;
    }
    catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

	std::cout << std::endl << std::endl;

	try {
	Span	new_sp = Span(10000);
	new_sp.addNumber(30);
	new_sp.addNumber(50);

	std::vector<int> vec1 = {200000, 350000};
	new_sp.SpanFill(vec1.begin(), vec1.end());
	std::cout << "Shortest span after adding range: " << new_sp.shortestSpan() << std::endl;
    std::cout << "Longest span after adding range: " << new_sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}



	return (0);
}