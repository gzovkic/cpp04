#pragma once

#include "AMateria.hpp"
#include "Interface/ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria* _inventory[4];

    public:
        Character();
        Character(const Character& other);
        Character& operator=(const Character& other);
        virtual ~Character();

        std::string const & getName() const override;
        void equip(AMateria* m) override;
        void    unequip(int idx) override;
        void    use(int idx, ICharacter& target) override;
};
