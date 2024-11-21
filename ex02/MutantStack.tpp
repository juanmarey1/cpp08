#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &original): std::stack<T>(original) {}

template <typename T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack<T> &original)
{
	if (this != &original)
	{
		std::stack<T>::operator=(original);
	}
	return (*this);
}

template <typename T>
typename std::deque<T>::iterator MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <typename T>
typename std::deque<T>::iterator MutantStack<T>::end()
{
	return (this->c.end());
}

template <typename T>
typename std::deque<T>::const_iterator MutantStack<T>::begin() const
{
	return (this->c.begin());
}


template <typename T>
typename std::deque<T>::const_iterator MutantStack<T>::end() const
{
	return (this->c.end());
}

template <typename T>
typename std::deque<T>::reverse_iterator MutantStack<T>::rbegin()
{
	return (this->c.rbegin());
}

template <typename T>
typename std::deque<T>::reverse_iterator MutantStack<T>::rend()
{
	return (this->c.rend());
}

template <typename T>
typename std::deque<T>::const_reverse_iterator MutantStack<T>::rbegin() const
{
	return (this->c.rbegin());
}

template <typename T>
typename std::deque<T>::const_reverse_iterator MutantStack<T>::rend() const
{
	return (this->c.rend());
}
