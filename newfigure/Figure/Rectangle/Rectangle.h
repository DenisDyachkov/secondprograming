#pragma once
#include "Point.h"

namespace miit::figure
{
	class Rectangle
	{
	public:
		Rectangle(const Point& point_1, const Point& point_2);
		Point get_point_1() const;
		Point get_point_2() const;
		Point get_point_3() const;
		Point get_point_4() const;
		double get_width() const;
		double get_hight() const;
		double get_perimetr() const;
		double get_area() const;
		std::string to_string() const;
		friend std::ostream& operator<< (std::ostream& os, const Rectangle& rectangle);

	private:
		double width;
		double hight;
		Point point_1;
		Point point_2;
		Point point_3;
		Point point_4;
	};
}