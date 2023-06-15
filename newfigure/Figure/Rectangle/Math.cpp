#include "Math.h"
#include <cmath>
bool miit::math::equal_doubles(const double lhs, const double rhs)
{
    return std::abs(lhs - rhs) < std::numeric_limits<double>::min();
}
