#ifndef FIXED_HPP

#define FIXED_HPP

class FIXED
{
    private:
        int _n;
        static const int _fractBits;
    public:
        Fixed();
        Fixed(Fixed const &other);
        Fixed &operator=(Fixed const &other);
        ~Fixed();
        int     geRawBits(void) const;
        void    setRawBits(int const raw);
}

#endif