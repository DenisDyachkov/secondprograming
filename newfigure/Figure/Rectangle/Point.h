﻿#pragma once
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
		const double get_x() const;
		const double get_y() const;
		friend std::ostream& operator<<(std::ostream& os, Point& point);

	private:
		double x; 
		double y; 
	

	};
}
