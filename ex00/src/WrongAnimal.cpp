#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
	: _type("unnamed WrongAnimal")
{
	std::cout 	<< RED << "WrongAnimal default constructor called"
				<< RESET << std::endl;
};

WrongAnimal::WrongAnimal(std::string type)
	: _type(type)
{
	std::cout 	<< BOLD << "WrongAnimal constructor called"
				<< RESET << std::endl;
};

WrongAnimal::WrongAnimal(const WrongAnimal& other)
	: _type(other._type)
{
	std::cout << "WrongAnimal " << this->_type << " copy-constructed." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if(this == &other)
		return(*this);
	
	this->_type = other._type;
	std::cout << "WrongAnimal " << _type << " assigned." << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout 	<< RED << "WrongAnimal deconstructor called"
				<< RESET << std::endl;
};

void WrongAnimal::printWrongAnimal()
{
	std::cout 	<< BOLD 	<< "Type: " << this->_type << "\n"
				<< RESET << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}

void WrongAnimal::setType(std::string type)
{
	_type = type;
}

void WrongAnimal::makeSound() const 
{
	std::cout 	<< BOLD << "WrongAnimal makeSound"
				<< RESET << std::endl;
}