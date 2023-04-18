#include "point.h"
#include "Rectangle.h"
Rectangle::Rectangle(Point topLeft, Point bottomRight) : topLeft(topLeft), bottomRight(bottomRight) {
	unsigned int x1 = topLeft.getX();
	unsigned int y1 = topLeft.getY();
	unsigned int x2 = bottomRight.getX();
	unsigned int y2 = bottomRight.getY();

	if (x2 < x1 || y2 < y1) {
		throw std::invalid_argument("Invalid rectangle coordinates");
	}
}

Rectangle::Rectangle(unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2) : Rectangle(Point(x1, y1), Point(x2, y2)) {
}

Rectangle Rectangle::readFromStream(std::istream& stream) {
	Point topLeft = Point::readFromStream(stream);
	Point bottomRight = Point::readFromStream(stream);
	return Rectangle(topLeft, bottomRight);
}

std::string Rectangle::toString() const {
	return topLeft.toString() + " " + bottomRight.toString();
}