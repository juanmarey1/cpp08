#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <stdexcept>

class Span
{
	private:
		std::vector<int>	vec;
		unsigned int		N;

	public:
		Span();
		Span(unsigned int N);
		Span(const Span &original);
		Span	&operator=(const Span &original);
		~Span();

		void	addNumber(int num);

		class FullSpanExcept: public std::exception
		{
			public:
				const char *what() const throw() {
					return ("Span is full!");
				}
		};

		int	shortestSpan() const;
		int	longestSpan() const;

		class NotEnoughNumbersExcept: public std::exception
		{
			public:
				const char *what() const throw() {
					return ("Not enough numbers!");
				}
		};

		template <typename Iterator>
		void	SpanFill(Iterator begin, Iterator end);

};
