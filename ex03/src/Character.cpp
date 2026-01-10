#include "../inc/Character.hpp"

Character::Character() : _name("default")
{
    std::cout   << BRIGHT_BLUE << "Character constructor called" 
                << std::endl;
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