#include "AMateria.hpp"
#include "../inc/Interface/ICharacter.hpp"

AMateria::AMateria(std::string const & type)
{
    std::cout   << "AMateria constructor called"
                << std::endl;
     this->_type = type;
};

AMateria::~AMateria()
{
    std::cout   << "AMateria destructor called"
                << std::endl;
}

std::string const& AMateria::getType() const
{
    return(this->_type);
}

void AMateria::use(ICharacter& target)
{
    std::cout   << "(no spell) is beeing used on" << target.getName()
                << std::endl;
}