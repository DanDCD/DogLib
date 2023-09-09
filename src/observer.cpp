#include "observer.h"
#include <iostream>

Observer::Observer()
{
    std::cout << "Observer constructor" << std::endl;
}

Observer::~Observer()
{
    std::cout << "Observer destructor" << std::endl;
}