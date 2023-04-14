#include <iostream>
#include <string>
class Point {
private:
	unsigned int x;
	unsigned int y;
public:
	Point(const unsigned int x=0, const unsigned int y=0); 
	// конструктор с двумя параметрами
	unsigned int getX() const; 
	// метод получения значения поля x
	unsigned int getY() const;
	// метод получения значения поля y
	void setX(unsigned int x);
	// метод задания значения поля x
	void setY(unsigned int y);
	// метод задания значения поля y
	std::string toString() const;
	// метод преобразования в строку
	friend std::ostream& operator«(std::ostream& stream, const Point& point);
	// переопределенный оператор вывода в поток
};