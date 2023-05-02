#include "Point.h"
#include "Math.h"
#include <string>

miit::figure::Point::Point(const double user_x, const double user_y)
	: x(user_x) , y(user_y)
{
}

 double miit::figure::Point::get_x() const
{
	return this->x;
}

 double miit::figure::Point::get_y() const
{
	return this->y;
}

std::ostream& miit::figure::operator<<(std::ostream& os, Point& point)
{
	return os << "x: " << std::to_string(point.x) + " y: " <<std::to_string(point.y);
}

bool miit::figure::operator==(const Point& lhs, const Point& rhs)
{
	return (miit::math::equal_doubles(lhs.x, rhs.x) && miit::math::equal_doubles(lhs.x, rhs.y));
}