#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{

private:
	int nb;
	static const int frc_bits = 8;

public:
	Fixed();
	Fixed(const Fixed &src);
	Fixed &operator=(const Fixed &src);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);

};


#endif
