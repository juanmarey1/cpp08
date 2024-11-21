#pragma once

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>


template <typename T>
typename T::iterator	easyfind(T &container, int numToFind); // <-- Te devuelve un iterador de la clase q tu le marques: tanto vector, como lista, etc...
