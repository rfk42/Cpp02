#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{

private:
	int nb;
	static const int frc_bits = 8;

public:
	Fixed();
	Fixed(const int number);
	Fixed(const float number);
	Fixed(const Fixed &src);
	Fixed &operator=(const Fixed &src);
	~Fixed();

	int		getRawBits(void) const;
	int		toInt(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
};

std::ostream &operator<<(std::ostream &out,  Fixed const &fixed);

#endif
