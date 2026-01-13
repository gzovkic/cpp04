#include "Spells/Ice.hpp"
#include "Interface/ICharacter.hpp"

Ice::Ice() : AMateria("ice")
{
    // std::cout   << BRIGHT_BLUE << "Ice constructor called"
    //             << std::endl;
}

Ice::Ice(const Ice& other) : AMateria(other._type)
{
    // std::cout   << BRIGHT_BLUE << "Ice copy constructor called"
    //             << std::endl;
}

Ice::~Ice()
{
    // std::cout   << BRIGHT_BLUE << "Ice destructor called"
    //             << std::endl;
}

Ice& Ice::operator=(const Ice& other)
{
    if(this == &other)
        return(*this);
    this->_type = other._type;
    return(*this);
}

AMateria* Ice::clone() const
{
    return(new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout   <<  BRIGHT_BLUE << "* shoots and ice bolt at " << target.getName() << " *"
                <<  RESET << std::endl;
}