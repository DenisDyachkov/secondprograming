#pragma once
#include "point.h"

class Rectangle {
private:
	Point topLeft;
	Point bottomRight;
public:
	Rectangle(Point topLeft, Point bottomRight); // ����������� � ����� �����������
	Rectangle(unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2); // ����������� � �������� �����������
	static Rectangle readFromStream(std::istream& stream); // ����������� ����� ������ �� ������ �����
	std::string toString() const; // ����� �������������� � ������
};