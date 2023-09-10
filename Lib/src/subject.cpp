#include "subject.h"
#include <iostream>

subject::subject(/* args */)
{
    std::cout << "subject constructor" << std::endl;
}

subject::~subject()
{
    std::cout << "subject destructor" << std::endl;
}