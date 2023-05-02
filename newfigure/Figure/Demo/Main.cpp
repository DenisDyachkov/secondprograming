#include <iostream>
#include "../Rectangle/Point.h"
using namespace  miit::figure;

int main()
{
	Point point_1 = Point(1, 1);
	Point point_2 = Point(1, 1);
	std::cout << (point_1 == point_2);
	return 0;
}
