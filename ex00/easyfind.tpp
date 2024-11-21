#include "easyfind.hpp"

template <typename T>
typename T::iterator	easyfind(T &container, int numToFind)
{
	typename T::iterator number = std::find(container.begin(), container.end(), numToFind); // < -- la funcion find te busca el numToFind desde el comienzo a fin. Si no lo encuentra, el iterador se posicionara donde el fin de la lista
	if (number != container.end())
		return (number);
	else
		throw (std::out_of_range("Number not found!"));
}
