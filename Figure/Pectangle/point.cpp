#include "point.h"
Point::Point(const unsigned int x, const unsigned int y)
	: x(x), y(y)
{
}
//Метод getX возвращает значение поля x.

unsigned int Point::getX() const
{
	return x;
}

//Метод getY возвращает значение поля y.

unsigned int Point::getY() const
{
	return y;
}

//Метод setX задает значение поля x.

void Point::setX(unsigned int x)
{
	this->x = x;
}

//Метод setY задает значение поля y.

void Point::setY(unsigned int y)
{
	this->y = y;
}

//Метод toString возвращает строку, представляющую объект Point.

std::string Point::toString() const
{
	return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
}

//Перегруженный оператор << выводит объект Point в поток stream в формате(x, y).

std::ostream& operator«(std::ostream& stream, const Point& point)
{
	stream  << point.toString();
	return stream;
}
