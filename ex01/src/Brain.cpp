#include "Brain.hpp"

Brain::Brain()
{
	std::cout 	<< RED << UNDERLINE << "Brain default constructor called"
				<< RESET << std::endl;
};

Brain::~Brain()
{
    std::cout 	<< RED << UNDERLINE << "Brain destructor called"
				<< RESET << std::endl;
};

Brain::Brain(const Brain& other)
{
	std::cout 	<< RED << UNDERLINE << "Brain copy-constructed."
				<< RESET << std::endl;
    for(int i = 0; i < 100; ++i)
        this->_ideas[i] = other._ideas[i];
}

Brain& Brain::operator=(const Brain& other)
{
    std::cout 	<< RED << UNDERLINE << "Brain copy assigment"
				<< RESET << std::endl;
    if(this == &other)
        return(*this);
    for(int i = 0; i < 100; ++i)
        this->_ideas[i] = other._ideas[i];

    return (*this);
}

std::string Brain::getIdea(int index)
{
    if(index >= 0 && index <= 100)
        return(this->_ideas[index]);
    return("");
}