#include "dog.h"
#include <iostream>

Dog::Dog() {
}

Dog::~Dog() {
}

void Dog::bark() {
    std::cout << "Woof!" << std::endl;
}