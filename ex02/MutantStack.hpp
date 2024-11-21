#pragma once

#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <iterator>
#include <deque>

template <typename T>
class MutantStack: public std::stack<T> // This is for making a stack of the type you want
{
	public:
		MutantStack(): std::stack<T>() {}
		MutantStack(const MutantStack &original);
		MutantStack	&operator=(const MutantStack &original);

		~MutantStack() {}

		using iterator = typename std::deque<T>::iterator;
		using const_iterator = typename std::deque<T>::iterator;
		using reverse_iterator = typename std::deque<T>::iterator;
		using const_reverse_iterator = typename std::deque<T>::iterator;

		typename std::deque<T>::iterator begin();
		typename std::deque<T>::iterator end();
		typename std::deque<T>::const_iterator begin() const;
		typename std::deque<T>::const_iterator end() const;
		typename std::deque<T>::reverse_iterator rbegin();
		typename std::deque<T>::reverse_iterator rend();
		typename std::deque<T>::const_reverse_iterator rbegin() const;
		typename std::deque<T>::const_reverse_iterator rend() const;

};