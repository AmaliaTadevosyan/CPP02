#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_fractBits = 8;

Fixed::Fixed()
{
    _n = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(other.getRawBits());

}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const &other)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &other)
    {
        this->setRawBits(other.getRawBits());
    }
    return (*this);
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    _n = value << _fractBits;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    _n = roundf(value * (1 << _fractBits));
}

int Fixed::getRawBits() const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return _n;
}

void Fixed::setRawBits(int const raw)
{
    _n = raw;
}

int Fixed::toInt() const
{
    int value = _n >> _fractBits;
    return (value);
}

float Fixed::toFloat() const
{
    float value = _n / (1.0 * (1 << _fractBits));
    return (value);
}

std::ostream& operator<<(std::ostream& os, const Fixed& other)
{
    os << other.toFloat();
    return os;
}