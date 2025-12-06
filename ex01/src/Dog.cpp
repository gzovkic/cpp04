#include "Dog.hpp"

Dog::Dog()
{
	this->_brain = new Brain;
	this->_type = "Dog";
	std::cout 	<< GREEN << "Dog default constructor called"
				<< RESET << std::endl;
};


Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog " << this->_type << " copy-constructed." << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if(this == &other)
		return(*this);
	this->_type = other._type;
	
	std::cout << "Dog " << _type << " assigned." << std::endl;
	return *this;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout 	<< GREEN << "Dog deconstructor called"
				<< RESET << std::endl;
};

void Dog::makeSound() const
{
	std::cout 	<< BOLD << "Dog makeSound"
				<< RESET << std::endl;
}