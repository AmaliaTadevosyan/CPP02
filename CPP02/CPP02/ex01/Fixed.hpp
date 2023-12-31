#ifndef FIXED_HPP

#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int _n;
        static const int _fractBits;
    public:
        Fixed(void);
        Fixed(const Fixed &other);
        Fixed& operator=(const Fixed &other);
        ~Fixed(void);
        Fixed(const int value);
        Fixed(const float value);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed &other);

#endif