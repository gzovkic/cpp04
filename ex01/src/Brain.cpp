#include "Brain.hpp"

Brain::Brain()
{
	std::cout 	<< YELLOW << "Brain default constructor called"
				<< RESET << std::endl;
};

Brain::~Brain()
{
	std::cout 	<< YELLOW << "Brian deconstructor called"
				<< RESET << std::endl;
};

Brain::Brain(const Brain& other)
{
	for(int i = 0; i < 100; ++i)
		_ideas[i] = other._ideas[i];

	std::cout << "Brain copy-constructed." << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
	if(this == &other)
		return(*this);

	for(int i = 0; i < 100; ++i)
		_ideas[i] = other._ideas[i];

	std::cout << "Brain copy assigned." << std::endl;
	return (*this);
}

std::string Brain::getIdea(int index)
{
	if(index >= 0 && index < 100)
		return(_ideas[index]);

	return("");
}

void Brain::setIdea(int index, std::string& idea)
{
	if(index >= 0 && index < 100)
		_ideas[index] = idea;

}

void Brain::printBrain(void)
{
	for(int i = 0; i < 100; ++i)
	{
		std::cout << this->_ideas[i] << std::endl;
	}
}