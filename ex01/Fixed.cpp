#include "Fixed.hpp"

Fixed::Fixed() : nb(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intValue) 
{
	std::cout << "Int constructor called" << std::endl;
	nb = intValue << frc_bits;
}

Fixed::Fixed(const float floatValue) 
{
	std::cout << "Float constructor called" << std::endl;
	nb = roundf(floatValue * (1 << frc_bits));
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignement operator called" << std::endl;
	setRawBits(src.getRawBits());
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Deconstructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return (this->nb);
}

void Fixed::setRawBits(int const raw)
{
	this->nb = raw;
}

float Fixed::toFloat() const 
{
	return static_cast<float>(nb) / (1 << frc_bits);
}

int Fixed::toInt() const 
{
	return nb >> frc_bits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) 
{
	out << fixed.toFloat();
	return out;
}