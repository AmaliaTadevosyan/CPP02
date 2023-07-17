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

        bool    operator>(const Fixed &cmp) const;
        bool    operator<(const Fixed &cmp) const;
        bool    operator>=(const Fixed &cmp) const;
        bool    operator<=(const Fixed &cmp) const;
        bool    operator==(const Fixed &cmp) const;
        bool    operator!=(const Fixed &cmp) const;

        Fixed   operator+(const Fixed &val);
        Fixed   operator-(const Fixed &val);
        Fixed   operator*(const Fixed &val);
        Fixed   operator/(const Fixed &val);

        Fixed   &operator++();
        Fixed   operator++(int);
        Fixed   &operator--();
        Fixed   operator--(int);



        static const Fixed min(const Fixed &a, const Fixed &b);
        static const Fixed max(const Fixed &a, const Fixed &b);
        static Fixed min(Fixed &a, Fixed &b);
        static Fixed max(Fixed &a, Fixed &b);
};

std::ostream& operator<<(std::ostream& os, const Fixed &other);

#endif