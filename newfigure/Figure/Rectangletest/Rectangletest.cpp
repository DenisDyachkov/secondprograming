#include "pch.h"
#include "CppUnitTest.h"
#include "../Rectangle/Rectangle.h"
#include "../Rectangle/Math.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace miit::figure;

namespace Rectangletest
{
	TEST_CLASS(Rectangletest)
	{
	public:

        TEST_METHOD(Ctor_RectangleZeroSide_ExeptionExpected)
        {
            Assert::ExpectException<std::out_of_range>([]()
                {auto x = Rectangle(Point(22, 33), Point(22, 33)); });
        }

        TEST_METHOD(GetPerimetr_ValidDataSuccess)
        {
            Point point_1 = Point(0, 0);
            Point point_2 = Point(1, 1);
            Rectangle rectangle = Rectangle(point_1, point_2);
            double expect_perimetr = 4;
            Assert::IsTrue(miit::math::equal_doubles(expect_perimetr, rectangle.get_perimetr()));
        }

        TEST_METHOD(GetArea_ValidDataSuccess)
        {
            Point point_1 = Point(0, 0);
            Point point_2 = Point(2, 2);
            Rectangle rectangle = Rectangle(point_1, point_2);
            double expect_area = 4;
            Assert::IsTrue(miit::math::equal_doubles(expect_area, rectangle.get_area()));
        }

        TEST_METHOD(PointEqualOperator_ValidDataSuccess)
        {
            Point point_1 = Point(1, 1);
            Point point_2 = Point(1, 1);
            Assert::IsTrue(point_1 == point_2);
        }

        TEST_METHOD(PointNotEqualOperator_ValidDataSuccess)
        {
            Point point_1 = Point(1, 1);
            Point point_2 = Point(1, 2);
            Assert::IsTrue(point_1 != point_2);
        }
	};
}
