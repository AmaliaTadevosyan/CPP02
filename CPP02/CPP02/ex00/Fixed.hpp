#ifndef FIXED_HPP

#define FIXED_HPP

class Fixed
{
    private:
        int _n;
        static const int _fractBits;
    public:
        Fixed(void);
        Fixed(const Fixed& other);
        Fixed& operator=(const Fixed& other);
        ~Fixed(void);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif