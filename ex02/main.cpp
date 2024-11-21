#include "MutantStack.hpp"
#include "MutantStack.tpp"

int main()
{
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << "top between 5 and 17: " << mstack.top() << std::endl;
mstack.pop();
std::cout << "Size with only 5 in stack: " << mstack.size() << std::endl << std::endl;


mstack.push(3);
mstack.push(5);
mstack.push(737);
//[...]
mstack.push(0);
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
++it;
--it;
std::cout << "Added: 3, 5, 737, 0\nFrom bottom to top: " << std::endl;

while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
std::cout << std::endl;

std::cout << "From top to bottom: " << std::endl;
--ite;
while (ite != mstack.begin())
{
	std::cout << *ite << std::endl;
	--ite;
}
std::cout << *ite << std::endl << std::endl;



std::stack<int> s(mstack);
std::cout << "Top in stack class (not mutant class):\n" << s.top() << std::endl;
return 0;
}