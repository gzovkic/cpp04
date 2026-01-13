#include "Spells/Fire.hpp"
#include "Interface/ICharacter.hpp"

Fire::Fire() : AMateria("fire")
{
    // std::cout   << BRIGHT_BLUE << "Fire constructor called"
    //             << std::endl;
}

Fire::Fire(const Fire& other) : AMateria(other._type)
{
    // std::cout   << BRIGHT_BLUE << "Fire copy constructor called"
    //             << std::endl;
}

Fire::~Fire()
{
    // std::cout   << BRIGHT_BLUE << "Fire destructor called"
    //             << std::endl;
}

Fire& Fire::operator=(const Fire& other)
{
    if(this == &other)
        return(*this);
    this->_type = other._type;
    return(*this);
}

AMateria* Fire::clone() const
{
    return(new Fire(*this));
}

void Fire::use(ICharacter& target)
{
    std::cout   <<  BRIGHT_RED << "* sets " << target.getName() << " on Fire *"
                <<  RESET << std::endl;
}