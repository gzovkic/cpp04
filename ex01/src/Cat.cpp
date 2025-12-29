#include "../inc/Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout 	<< BLUE << "Cat default constructor called"
				<< RESET << std::endl;
	this->_brain = new Brain();
};


Cat::Cat(const Cat& other) : Animal(other)
{
	this->_brain = new Brain(*other._brain);
	std::cout << "Cat " << this->_type << " copy-constructed." << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if(this == &other)
		return(*this);
	this->_type = other._type;
	
	delete this->_brain;
	this->_brain = new Brain(*other._brain);

	std::cout << "Cat " << _type << " assigned." << std::endl;
	return *this;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout 	<< BLUE << "Cat deconstructor called"
				<< RESET << std::endl;
};

void Cat::makeSound() const
{
	std::cout 	<< BOLD << "Cat makeSound"
				<< RESET << std::endl;
}