#include "Span.hpp"

Span::Span(): N(0) {}

Span::Span(unsigned int N): N(N) {}

Span::Span(const Span &original): N(original.N) {
	for (int i = 0; i < original.vec.size(); i++) {
		this->vec.push_back(original.vec[i]);
	}
}

Span	&Span::operator=(const Span &original)
{
	if (this != &original)
	{
		this->N = original.N;
		for (int i = 0; i < original.vec.size(); i++) {
			this->vec.push_back(original.vec[i]);
		}
	}
	return (*this);
}

Span::~Span() {}


void	Span::addNumber(int num)
{
	if (this->vec.size() < N)
		this->vec.push_back(num);
	else
		throw FullSpanExcept();
}

int	Span::shortestSpan() const
{
	if (this->vec.size() < 2)
		throw NotEnoughNumbersExcept();

	std::vector<int> sorted = this->vec;
	std::sort(sorted.begin(), sorted.end());

	int shortestSP = sorted[1] - sorted[0];
	int	diff;
	for (int i = 1; i < sorted.size(); i++)
	{
		diff = sorted[i] - sorted[i - 1];
		if (diff < shortestSP)
			shortestSP = diff;
	}
	return (shortestSP);
}

int	Span::longestSpan() const
{
	if (this->vec.size() < 2)
		throw NotEnoughNumbersExcept();
	
	std::vector<int> sorted = this->vec;
	std::sort(sorted.begin(), sorted.end());

	return (sorted[sorted.size() - 1] - sorted[0]);
}

template <typename Iterator>
void	Span::SpanFill(Iterator begin, Iterator end)
{
	while (begin != end)
	{
		addNumber(*begin);
		begin++;
	}
}

template void Span::SpanFill<std::vector<int>::iterator>(std::vector<int>::iterator, std::vector<int>::iterator);
