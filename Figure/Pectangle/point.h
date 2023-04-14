#include <iostream>
#include <string>
class Point {
private:
	unsigned int x;
	unsigned int y;
public:
	Point(const unsigned int x=0, const unsigned int y=0); 
	// ����������� � ����� �����������
	unsigned int getX() const; 
	// ����� ��������� �������� ���� x
	unsigned int getY() const;
	// ����� ��������� �������� ���� y
	void setX(unsigned int x);
	// ����� ������� �������� ���� x
	void setY(unsigned int y);
	// ����� ������� �������� ���� y
	std::string toString() const;
	// ����� �������������� � ������
	friend std::ostream& operator�(std::ostream& stream, const Point& point);
	// ���������������� �������� ������ � �����
};