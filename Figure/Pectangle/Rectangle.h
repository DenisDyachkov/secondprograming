#pragma once
#include "point.h"

class Rectangle {
private:
	Point topLeft;
	Point bottomRight;
public:
	Rectangle(Point topLeft, Point bottomRight); // конструктор с двумя параметрами
	Rectangle(unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2); // конструктор с четырьмя параметрами
	static Rectangle readFromStream(std::istream& stream); // статический метод чтения из потока ввода
	std::string toString() const; // метод преобразования в строку
};