#include "port.h"
#include "vintage_port.h"

#include <cstring>

VintagePort::VintagePort() : Port("none", "vintage"), year(0)
{
	nickname = new char[20];
	strcpy(nickname, "none");
}

VintagePort::VintagePort(const char* br, int b, const char* nn, int y) :
							Port(br, "vintage", b), year(y < 0 ? 0 : y)
{
	nickname = new char[20];
	strncpy(nickname, nn, 19);
	nickname[19] = '\0';
}

VintagePort::VintagePort(const VintagePort& vp) :
						Port(static_cast<const Port &>(vp)), year(vp.year)
{
	nickname = new char[20];
	strcpy(nickname, vp.nickname);
}

VintagePort & VintagePort::operator=(const VintagePort & vp)
{
	if (this != &vp)
	{
		Port::operator=(static_cast<const Port &>(vp));
		strcpy(nickname, vp.nickname);
		year = vp.year;
	}
	return *this;
}

void VintagePort::Show() const
{
	Port::Show();
	std::cout << "Title: " << nickname << std::endl
	<< "Year: " << year << std::endl;
}

std::ostream& operator<<(std::ostream& os, const VintagePort& vp)
{
	os << static_cast<const Port &>(vp) <<
	", " << vp.nickname << ", " << vp.year;
	return os;
}
