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

	int					getRawBits(void) const;
	int					toInt(void) const;
	void				setRawBits(int const raw);
	float				toFloat(void) const;
	static Fixed		&min(Fixed &a, Fixed &b);
	static Fixed		&max(Fixed &a, Fixed &b);
	static const Fixed	&min(const Fixed &a, const Fixed &b);
	static const Fixed	&max(const Fixed &a, const Fixed &b);

	// Surcharge d'operateurs
	bool operator > (const Fixed &src) const;
	bool operator < (const Fixed &src) const;
	bool operator >= (const Fixed &src) const;
	bool operator <= (const Fixed &src) const;
	bool operator == (const Fixed &src) const;
	bool operator != (const Fixed &src) const;

	Fixed operator + (const Fixed &src) const;
	Fixed operator - (const Fixed &src) const;
	Fixed operator * (const Fixed &src) const;
	Fixed operator / (const Fixed &src) const;

	Fixed operator ++ (void);
	Fixed operator ++ (int);
	Fixed operator -- (void);
	Fixed operator -- (int);
};

std::ostream &operator<<(std::ostream &out,  Fixed const &fixed);

#endif
