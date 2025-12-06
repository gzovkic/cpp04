#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout 	<< MAGENTA << "WrongCat default constructor called"
				<< RESET << std::endl;
};


WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << "WrongCat " << this->_type << " copy-constructed." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if(this == &other)
		return(*this);
	this->_type = other._type;
	
	std::cout << "WrongCat " << _type << " assigned." << std::endl;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout 	<< MAGENTA << "WrongCat deconstructor called"
				<< RESET << std::endl;
};

void WrongCat::makeSound() const
{
	std::cout 	<< BOLD << "WrongCat makeSound"
				<< RESET << std::endl;
}