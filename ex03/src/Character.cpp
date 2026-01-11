#include "../inc/Character.hpp"

Character::Character() : _name("default")
{
    std::cout   << BRIGHT_BLUE << "Character constructor called"
                << std::endl;
    for(int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

Character::Character(std::string name)
{
    std::cout   << BRIGHT_BLUE << "Character constructor called"
                << std::endl;
	this->_name = name;
    for(int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

Character::Character(const Character& other)
{
    std::cout   << BRIGHT_BLUE << "Character copy constructor called"
                << std::endl;
    for(int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    this->_name = other._name;
    for(int i = 0; i < 4; i++)
    {
        if(other._inventory[i] != NULL)
            this->_inventory[i] = other._inventory[i]->clone();
    }
}


Character& Character::operator=(const Character& other)
{
    if(this == &other)
    	return(*this);
    this->_name = other._name;
    for(int i = 0; i < 4; i++)
    {
        if(this->_inventory[i] != NULL)
        {
            delete this->_inventory[i];
            this->_inventory[i] = NULL;
        }
    }
    for(int i = 0; i < 4; i++)
    {
        if(other._inventory[i] != NULL)
            this->_inventory[i] = other._inventory[i]->clone();
    }
    return(*this);
}

Character::~Character()
{
    std::cout   << BRIGHT_BLUE << "Character destructor called"
                << std::endl;
    for(int i = 0; i < 4; i++)
        delete this->_inventory[i];
}

std::string const& Character::getName() const
{
	return(this->_name);
}

void Character::equip(AMateria* m)
{
	if(m == NULL)
	{
		std::cout	<< "Spell cant be equiped"
					<< std::endl;
		return;
	}
	for(int i = 0; i < 4; i++)
	{
		if(this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			std::cout	<< m->getType() << " has been equiped in inventory slot " << i
						<< std::endl;
			return;
		}
	}
	std::cout	<< "no inventory slot avilible"
				<< std::endl;
}

void Character::unequip(int idx)
{
	if(idx >= 0 && idx <= 3)
	{
		if(this->_inventory[idx] != NULL)
		{
			this->_inventory[idx] = NULL;
			std::cout	<< "inventory slot " << idx << " has been dequiped"
						<< std::endl;
		}
		else
		{
			std::cout	<< "inventory slot is already empty"
						<< std::endl;
		}
	}
	if(idx > 3)
	{
		std::cout	<< "inventory is not big enough"
					<< std::endl;
	}
	if(idx < 0)
	{
		std::cout	<< "idx number cant be smaller than 0"
					<< std::endl;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if(idx >= 0 && idx <= 3)
	{
		if(this->_inventory[idx] != NULL)
		{
			this->_inventory[idx]->use(target);
		}
		else
		{
			std::cout	<< "inventory slot is empty"
						<< std::endl;
		}
	}
	if(idx > 3)
	{
		std::cout	<< "inventory is not big enough"
					<< std::endl;
	}
	if(idx < 0)
	{
		std::cout	<< "idx number cant be smaller than 0"
					<< std::endl;
	}

}