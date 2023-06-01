
#include "Rectangle.h"
#include "Point.h"

#include <iostream>
#include <sstream>

miit::figure::Rectangle::Rectangle(const Point& point_1, const Point& point_2)
	:point_1(point_1), point_2(point_2)
{
	if (point_1 == point_2)
	{
		throw std::out_of_range("Err Incorrerct Rectangle");
	}
	double width = point_2.get_x() - point_1.get_x();
	double hight = point_2.get_y() - point_1.get_y();
	this->point_2 = Point(point_1.get_x(), point_1.get_y() + hight);
	this->point_4 = Point(point_1.get_x() + +width, point_1.get_y());
	this->hight = std::abs(hight);
	this->width = std::abs(width);
}

miit::figure::Point miit::figure::Rectangle::get_point_1() const
{
	return this->point_1;
}

miit::figure::Point miit::figure::Rectangle::get_point_2() const
{
	return this->point_2;
}

miit::figure::Point miit::figure::Rectangle::get_point_3() const
{
	return this->point_3;
}

miit::figure::Point miit::figure::Rectangle::get_point_4() const
{
	return this->point_4;
}

double miit::figure::Rectangle::get_width() const
{
	return this->width;
}

double miit::figure::Rectangle::get_hight() const
{
	return this->hight;
}

double miit::figure::Rectangle::get_perimetr() const
{
	return 2 * (this->hight + this->width);
}

double miit::figure::Rectangle::get_area() const
{
	return this->hight * this->width;
}

std::string miit::figure::Rectangle::to_string() const
{
	std::stringstream result;
	result << "Point_1: " << point_1 << "Point_2: " << point_2 << "Point_3: " << point_2 << "Point_4: " << point_2 << "Hight: " << hight << "Width: " << width;
	return result.str();
}

std::ostream& miit::figure::operator<<(std::ostream& os, const Rectangle& rectangle)
{
	return os << rectangle.to_string();
}
