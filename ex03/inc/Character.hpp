#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria* _inventory[4];

    public:
        Character();
        Character(const Character& other);
        Character& operator=(const Character& other);
        ~Character();

        
};
