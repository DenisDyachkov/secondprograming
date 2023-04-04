#include <iostream>
#include <string>


class Point {
private:
	unsigned int x;
	unsigned int y;
public:
	Point(unsigned int x, unsigned int y); // конструктор с двумя параметрами
	Point(); 
	unsigned int getX() const; // метод получения значения поля x
	unsigned int getY() const; // метод получения значения поля y
	void setX(unsigned int x); 
	void setY(unsigned int y); 
	static Point readFromStream(std::istream& stream); 
	std::string toString() const; // метод преобразования в строку
	bool operator==(const Point& other) const; 
	bool operator!=(const Point& other) const; 
	Point operator+(const Point& other) const; 
	Point operator-(const Point& other) const; 
	Point operator+(unsigned int value) const; 
	Point operator-(unsigned int value) const;
	friend std::ostream& operator«(std::ostream& stream, const Point& point);
};



class Rectangle {
private:
	Point topLeft;
	Point bottomRight;
public:
	Rectangle(Point topLeft, Point bottomRight); 
	Rectangle(unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2); 
	static Rectangle readFromStream(std::istream& stream); 
	std::string toString() const; // метод преобразования в строку
};