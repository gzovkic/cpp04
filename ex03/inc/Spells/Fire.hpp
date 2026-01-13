#pragma once

#include "Colors.hpp"
#include "AMateria.hpp"

class Fire : public AMateria
{
    public:
		Fire();
	    ~Fire();
        Fire(const Fire& other);
        Fire& operator=(const Fire& other);

        AMateria* clone() const override;
        void use(ICharacter& target) override;
};