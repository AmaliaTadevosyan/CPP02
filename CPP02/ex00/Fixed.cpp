#include "Fixed.hpp"
#include <iostream>

const int Fixed::_fractBits = 8;

Fixed::Fixed()
{
    std::cout << "Fixed  default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(other.geRawBits());
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const &other)
{
    if (this == &other)
        return (*this);
    std::cout << "Cpoy assignment operaot called" << std::endl;
    this->setRawBits(other.geRawBits);
    return (*this);
}

