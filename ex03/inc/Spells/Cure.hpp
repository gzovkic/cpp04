#pragma once

#include "Colors.hpp"
#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
		Cure();
	    ~Cure();
        Cure(const Cure& other);
        Cure& operator=(const Cure& other);

        AMateria* clone() const override;
        void use(ICharacter& target) override;
};