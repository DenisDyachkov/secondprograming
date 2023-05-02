#pragma once
#include <iostream>

namespace miit::figure
{
	/*
	* @brief класс точка
	*/
	class Point
	{
	public:
		Point(const double user_x, const double user_y);
		double get_x() const;
		 double get_y() const;
		friend std::ostream& operator<<(std::ostream& os, Point& point);
		friend bool operator ==(const Point& lhs, const Point& rhs);
	private:
		double x; 
		double y; 
	    

	};
}
