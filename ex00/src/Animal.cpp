#include "Animal.hpp"

Animal::Animal()
	: _type("unnamed Animal")
{
	std::cout 	<< YELLOW << "Animal default constructor called"
				<< RESET << std::endl;
};


Animal::Animal(const Animal& other)
	: _type(other._type)
{
	std::cout << "Animal " << this->_type << " copy-constructed." << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	if(this == &other)
		return(*this);
	
	this->_type = other._type;
	std::cout << "Animal " << _type << " assigned." << std::endl;
	return *this;
}

Animal::~Animal()
{
	std::cout 	<< YELLOW << "Animal deconstructor called"
				<< RESET << std::endl;
};

std::string Animal::getType() const
{
	return (this->_type);
}

void Animal::makeSound() const 
{
	std::cout 	<< BOLD << "Animal makeSound"
				<< RESET << std::endl;
}