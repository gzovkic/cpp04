#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout   << BRIGHT_BLUE << "Cure constructor called" 
                << std::endl;
}

Cure::Cure(const Cure& other) : AMateria(other._type)
{
    std::cout   << BRIGHT_BLUE << "Cure copy constructor called" 
                << std::endl;
}

Cure::~Cure()
{
    std::cout   << BRIGHT_BLUE << "Cure destructor called" 
                << std::endl;
}

Cure& Cure::operator=(const Cure& other)
{
    if(this == &other)
        return(*this);
    this->_type = other._type;
    return(*this);
}

AMateria* Cure::clone() const
{
    return(new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout   << "* heals " << target.getName() << "'s wounds *"
                << std::endl;
}