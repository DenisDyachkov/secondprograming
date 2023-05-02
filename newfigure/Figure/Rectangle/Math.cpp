#include "Math.h"
#include <cmath>
bool miit::math::equal_doubles(double lhs, double rhs)
{
    return std::abs(lhs - rhs) < 0.00001;;
}
