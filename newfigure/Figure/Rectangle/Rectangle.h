
#include "Point.h"

namespace miit::figure
{
    class Rectangle
    {
    public:

        Rectangle(Point point_1, Point point_2);
        Point get_point_1() const;
        Point get_point_2() const;
        Point get_point_3() const;
        Point get_point_4() const;
    private:
        Point point_1;
        Point point_2;
        Point point_3;
        Point point_4;
    };
}
