#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout   << BRIGHT_BLUE << "MateriaSource constructor called"
                << std::endl;
    for(int i = 0; i < 4; i++)
        this->_templates[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
    std::cout   << BRIGHT_BLUE << "MateriaSource copy constructor called"
                << std::endl;
    for(int i = 0; i < 4; i++)
        this->_templates[i] = NULL;
    for(int i = 0; i < 4; i++)
    {
        if(other._templates[i] != NULL)
            this->_templates[i] = other._templates[i]->clone();
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    if(this == &other)
    	return(*this);
    for(int i = 0; i < 4; i++)
    {
        if(this->_templates[i] != NULL)
        {
            delete this->_templates[i];
            this->_templates[i] = NULL;
        }
    }
    for(int i = 0; i < 4; i++)
    {
        if(other._templates[i] != NULL)
            this->_templates[i] = other._templates[i]->clone();
    }
    return(*this);
}

MateriaSource::~MateriaSource()
{
    std::cout   << BRIGHT_BLUE << "MateriaSource destructor called"
                << std::endl;
    for(int i = 0; i < 4; i++)
        delete this->_templates[i];
}

void MateriaSource::learnMateria(AMateria* materia)
{
    for(int i = 0; i < 4; i++)
	{
		if(this->_templates[i] == NULL)
		{
			this->_templates[i] = materia;
			std::cout	<< materia->getType() << "  learn Materia on slot " << i
						<< std::endl;
			return;
		}
	}
    delete materia;
    std::cout	<< "no more template slots avaliable"
				<< std::endl;
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
    for(int i = 0; i < 4; i++)
    {
        if(this->_templates)
    }
}