#pragma once

#include "Colors.hpp"
#include "Interface/IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* _templates[4];

    public:
        MateriaSource();
        MateriaSource(const MateriaSource& other);
        MateriaSource& operator=(const MateriaSource& other);
	    ~MateriaSource();

        void learnMateria(AMateria* materia) override;
        AMateria* createMateria(std::string const& type) override;
};