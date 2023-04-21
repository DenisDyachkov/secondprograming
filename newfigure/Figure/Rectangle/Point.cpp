#include "Point.h"
#include <string>

miit::figure::Point::Point(const double user_x, const double user_y)
	: x(user_x) , y(user_y)
{
}

const double miit::figure::Point::get_x() const
{
	return this->x;
}

const double miit::figure::Point::get_y() const
{
	return this->y;
}

std::ostream& miit::figure::operator<<(std::ostream& os, Point& point)
{
	return os << "x: " + std::to_string(point.x) + " y: " + std::to_string(point.y);
}
