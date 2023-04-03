#include <iostream>

class Point {
private:
	unsigned int x;
	unsigned int y;
public:
	Point(unsigned int x, unsigned int y); // ����������� � ����� �����������
	Point(); 
	unsigned int getX() const; // ����� ��������� �������� ���� x
	unsigned int getY() const; // ����� ��������� �������� ���� y
	void setX(unsigned int x); 
	void setY(unsigned int y); 
	static Point readFromStream(std::istream& stream); 
	std::string toString() const; // ����� �������������� � ������
	bool operator==(const Point& other) const; 
	bool operator!=(const Point& other) const; 
	Point operator+(const Point& other) const; 
	Point operator-(const Point& other) const; 
	Point operator+(unsigned int value) const; 
	Point operator-(unsigned int value) const;
	friend std::ostream& operator�(std::ostream& stream, const Point& point);
};



class Rectangle {
private:
	Point topLeft;
	Point bottomRight;
public:
	Rectangle(Point topLeft, Point bottomRight); 
	Rectangle(unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2); 
	static Rectangle readFromStream(std::istream& stream); 
	std::string toString() const; // ����� �������������� � ������
};