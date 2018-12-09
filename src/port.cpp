#include "port.h"

#include <cstring>

Port::Port(const char* br, const char* st, int b) : bottles(b < 0 ? 0 : b)
{
	brand = new char[20];
	strncpy(brand, br, 19);
	brand[19] = '\0';
	strncpy(style, st, 19);
	style[19] = '\0';
}

Port::Port(const Port& p)
{
	brand = new char[20];
	*this = p;
}

Port& Port::operator= (const Port & p)
{
	if (this != &p)
	{
		strcpy(brand, p.brand);
		strcpy(style, p.style);
		bottles = p.bottles;
	}
	return *this;
}

Port& Port::operator+= (int b)
{
	int result = bottles + b;
	if (result < 0)
	{
		// TODO think about appropriate handling
		std::cerr << "Not enough bottles fot this operation" << std::endl;
	}
	else
	{
		bottles = result;
	}
	return *this;
}

Port& Port::operator-= (int b)
{
	int result = bottles - b;
	if (result < 0)
	{
		// TODO think about appropriate handling
		std::cerr << "Not enough bottles fot this operation" << std::endl;
	}
	else
	{
		bottles = result;
	}
	return *this;
}

void Port::Show() const
{
	std::cout
	<< "Brand: " << brand << std::endl
	<< "Kind: " << style << std::endl
	<< "Bottles: " << bottles << std::endl;
}

std::ostream& operator<< (std::ostream& os, const Port& p)
{
	os << p.brand << ", " << p.style << ", " << p.bottles;
	return os;
}
